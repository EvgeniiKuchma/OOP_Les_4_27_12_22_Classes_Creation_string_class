#pragma once
#include <iostream>

class String
{
public:
	String(const char* data);//параметризованный конструктор
	~String();
	String(String& other);//конструктор копирования
	String& operator = (String& other);//перегруженный оператр присвоения
	//String& operator = (const char* other);
	//s[i] == s.operator[](i);
	char operator[](size_t index);
	//std::cout << s
	friend std::ostream& operator <<(std::ostream& os, String& s)
	{
	for (size_t i = 0; i < strlen (s._data); i ++)
	//os 
	//size_t = беззнаковый челочисленный тип помещающий в себя 8 байт
	{
		//s[i] == s._data[i]; 
		os << s[i];
	}
	return os;
	}
	//String operator +(String& other);

private:
	 char* _data = nullptr;
	};

