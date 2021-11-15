#include<iostream> 	// c++ bilbl. iostream
#include<string.h>	// v bibl. string

int main()
{
	char s[15];
	strcpy(s,"Mustermann");
								// verwenden einer c-bibl. in c++
	std::cout << "Erstes c++ Programm: " << s << std::endl;	// c++
	return 0;
}

