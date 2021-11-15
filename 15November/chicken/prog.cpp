#include "chicken.hpp"
#include<iostream>

using namespace std;

int main()
{
	cout << "Statisches Reservieren" << endl;
	chicken c1(2);

	cout << "Dynamisches Reservieren" << endl;
	chicken *c2 = new chicken(4,1000);
	delete c2;
	cout << "Ende dynamisches verwenden" << endl;
	return 0;
}

