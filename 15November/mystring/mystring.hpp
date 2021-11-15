#include<iostream>
#ifndef mystring_hpp
#define mystring_hpp
class mystring
{
	private:
		char *a = NULL;
	public:
		mystring();
		mystring(const char *);
		mystring(const mystring &); // Copy ctor
		~mystring();
		char * getA();
		void setA(const char *s);
		void setA(const mystring &);
		void print();
		void println();
		void copystr(const char *);
};

#endif
