#include "mystring.hpp"
#include <iostream>

using namespace std;

int main()
{
	mystring ms1("Mustermann");

	cout << "test : ";
	ms1.println();

	cout << "---------------------------------" << endl;
	/*mystring ms2;*/
	/*ms2 = ms1; Es zeigt dann auf die gleiche Adresse*/
	/* eigene Lösung für das Problem */
	/*ms2.copystr(ms1.getA());*/
	/* copy ctor */
	mystring ms2(ms1);

	ms1.println();
	ms2.println();

	cout << "---------------------------------" << endl;
	ms2.setA("Musterhausen");
	ms1.println();
	ms2.println();

	cout << "---------------------------------" << endl;
	ms2.setA(ms2);
	ms1.println();
	ms2.println();

	return 0;
}

