#include <iostream>
#include "String.h"
//�� �� ���������� ���������� � ������� ��� 1 ���� ��� � ���������� 
// ��������� ��� ����  �.��� std::string ( �� ������ ����������)
//����� ��� ��������� ��������� ����� ���������� 
int main ()
{
	String str("abc");
	std::cout << "Fist str:" << str << std::endl;
	std::cout << "----------" << std::endl;
	String str1(str);
	String str2("bob");
	str = str2;
	//qstr = "abc";
	std::cout << "Second str:" << str <<std::endl; 
	std::cout << "----------" << std::endl;
	

	return 0;
}