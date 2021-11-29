#include "crational.hpp"
#include<iostream>
using namespace std;

int main()
{
	crational cr1(1,2);
	crational cr2(4,3);
	crational cr3(5);
	crational cr4(cr2);
	crational cr5;
	crational cr6(1.5);
	crational cr7 = 2.5;
	crational cr8 = 5.127;

	cr1.output();
	cout << endl;
	cr2.output();
	cout << endl;
	cr3.output();
	cout << endl;
	cr4.output();
	cout << endl;

	cr5 = cr2;
	cr5.output();
	cout << endl;

	cr2 = 55;
	cr2.output();
	cout << endl;

	cr6.output();
	cout << endl;
	cr7.output();
	cout << endl;
	cr8.output();
	cout << endl;

	crational cr9 = cr2 * cr7;
	cr9.output();
	cout << endl;

	//crational cr10 = cr1 + 1.5;
	//cr10.output();
	//cout << endl;

	if(cr1!=cr2) cout << "cr1!=cr2" << endl;

	cr2 = cr1;
	if(cr1==cr2) cout << "cr1==cr2" << endl;

	cout << "Test: " << cr3 << endl; // durch Überschreiben des ostream operator <<

	double d = cr4;
	cout << "Test cr4  " << cr4 << " double: " << d << endl;

	cr3 -= cr1;
	cr3.output();
	cout << endl;
}

