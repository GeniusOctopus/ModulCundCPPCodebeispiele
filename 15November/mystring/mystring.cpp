#include "mystring.hpp"

#ifndef mystring_cpp
#define mystring_cpp

#include<iostream>
#include<string.h>

using namespace std;

mystring::mystring()
{
	this->setA("");
}

mystring::mystring(const char * s)
{
	this->setA(s);
}

mystring::mystring(const mystring & m)
{
	setA(m.a);
}

mystring::~mystring()
{
	delete [] this->a;
}

void mystring::setA(const char * s)
{
	if(this->a != NULL) delete [] this->a;

	this->a = new char[strlen(s) + 1];
	strcpy(this->a,s);
}

void mystring::setA(const mystring &m)
{
	if ( this != &m ) this-> setA(m.a);
}

// 22 November

mystring& mystring::operator=(const mystring &m)
{
	this->setA(m.a);
	return *this;
}

mystring mystring::operator+(const mystring &m)
{
	mystring temp;
	temp.a = new char[strlen(this->a) + strlen(m.a) + 1];
	strcpy(temp.a,this->a);
	strcat(temp.a,m.a);

	return temp;
}

bool mystring::operator==(const mystring &m)
{
	if (strcmp(this->a,m.a)==0) return true;
	else  return false;
}

bool mystring::operator!=(const mystring &m)
{
	return !operator==(m);
}

ostream& operator << (ostream &o, const mystring &m)
{
	return o << m.a;
}

//

void mystring::print()
{
	cout << this->a;
}

void mystring::println()
{
	cout << this->a << endl;
}

void mystring::copystr(const char * s)
{
	strcpy(this->a, s);
}

char * mystring::getA()
{
	return this->a;
}

#endif
