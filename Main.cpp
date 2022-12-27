#include <iostream>
#include "String.h"
//дз по перегрузке операторов и добавть еще 1 поле инт и пергрузите 
// операторы для инта  и.или std::string ( по вашему усмотрению)
//чтобы все указанные операторы имели перегрузку 
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