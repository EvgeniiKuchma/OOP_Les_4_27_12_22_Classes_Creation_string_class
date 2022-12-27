#include "String.h"
#include <cstring>

String::String (const char* data) : _data(new char [strlen(data)+1])//+1 для nullterminator(\0 обозначающий конец строки)
{
	std::cout << " String (const char* data) constructor" << std::endl;
	strcpy(_data, data);
	std::cout << "----------" << std::endl;
}
String::~String()
{
	std::cout << "Destructor work!!!" << std::endl;
	if (_data != nullptr )
	{
		delete[] _data;
	}
	std::cout << "----------" << std::endl;
}
String::String(String& other) : _data(new char[strlen(other._data)+1])//конструктор копирования срабатывает 1 раз за жизнь обьекта
{
	std::cout << " String(String& other) copy constructor" << std::endl;
	strcpy(_data, other._data);
	std::cout << "----------" << std::endl;
}//str = str1;
String& String::operator = (String& other)
{
	std::cout << "operator was called" << std::endl;
	std::cout << "----------" << std::endl;
	if (this != &other)//this указывает на str
	{
	if(_data != nullptr)
	{
		delete[]_data;
	}
	_data = new char[strlen(other._data) + 1];
	strcpy(_data, other._data);
	}
	return *this;
	}
char String::operator[](size_t index)//возвращаем не по ссылке так как ссылка весит больше чем сам char( 8байт)
{
	return _data[index];
	
};

//если работаем с указателями каждый раз делаем проверку, кроме того каждый раз когда неуверен что лежит в _data
/*String String::operator+(String& other)
{
	std::cout << " operator+ was called" << std::endl;
	char* newData = new char[strlen(_data) + strlen(other._data) + 1];
	strcpy(newData, _data);//в NewData положит _data  и в том числе \0
	strcat(newData, other._data);//уберает с конца \0 терминаттор, затем записывает other._data(уже лежит в other._data \0)
	String resStr(newData);
	delete[] newData;
	return resStr;
	std::cout << "----------" << std::endl;
}*/