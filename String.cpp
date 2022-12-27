#include "String.h"
#include <cstring>

String::String (const char* data) : _data(new char [strlen(data)+1])//+1 ��� nullterminator(\0 ������������ ����� ������)
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
String::String(String& other) : _data(new char[strlen(other._data)+1])//����������� ����������� ����������� 1 ��� �� ����� �������
{
	std::cout << " String(String& other) copy constructor" << std::endl;
	strcpy(_data, other._data);
	std::cout << "----------" << std::endl;
}//str = str1;
String& String::operator = (String& other)
{
	std::cout << "operator was called" << std::endl;
	std::cout << "----------" << std::endl;
	if (this != &other)//this ��������� �� str
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
char String::operator[](size_t index)//���������� �� �� ������ ��� ��� ������ ����� ������ ��� ��� char( 8����)
{
	return _data[index];
	
};

//���� �������� � ����������� ������ ��� ������ ��������, ����� ���� ������ ��� ����� �������� ��� ����� � _data
/*String String::operator+(String& other)
{
	std::cout << " operator+ was called" << std::endl;
	char* newData = new char[strlen(_data) + strlen(other._data) + 1];
	strcpy(newData, _data);//� NewData ������� _data  � � ��� ����� \0
	strcat(newData, other._data);//������� � ����� \0 �����������, ����� ���������� other._data(��� ����� � other._data \0)
	String resStr(newData);
	delete[] newData;
	return resStr;
	std::cout << "----------" << std::endl;
}*/