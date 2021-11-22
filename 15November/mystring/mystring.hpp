#include<iostream>
#ifndef mystring_hpp
#define mystring_hpp

using namespace std;

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

		// 22 November

		mystring & operator = (const mystring &);
		mystring operator + (const mystring &);

		bool operator == (const mystring &);
		bool operator != (const mystring &);

		friend ostream & operator << (ostream &, const mystring &);

		//
};

#endif
