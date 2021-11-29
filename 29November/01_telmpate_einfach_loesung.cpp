#include<iostream>

using namespace std;

template<typename mytype>
bool istGroesser(const mytype &a, const mytype &b)
{
	return a > b;
}

int main()
{
	int it1 = 3, it2 = 4;

	if (istGroesser(it1, it2)) cout << "it1 ist größer it2" << endl;
	else cout << "it1 ist kleiner gleich it2" << endl;

	double d1 = 55.4, d2 = 3.03;
	if (istGroesser(d1, d2)) cout << "d1 ist größer d2" << endl;
	else cout << "d1 ist kleiner gleich d2" << endl;

	// geht nicht
	// if (istGroesser(it1, d1)) {} -> Unterschiedliche Typen
	if (istGroesser((double)it1, d1)) cout << "Ist größer" << endl;
	else cout << "ist kleiner gleich" << endl;

	long l1 = 4444444, l2 = 33;
	if (istGroesser(l1, l2)) cout << "l1 ist größer l2" << endl;
	else cout << "l1 ist kleiner gleich l2" << endl;

	return 0;
}

