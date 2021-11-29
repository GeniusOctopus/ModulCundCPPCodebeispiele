#include<iostream>

using namespace std;

bool istGroesser(int i1, int i2)
{
	return i1>i2;
}

bool istGroesser(double d1, double d2)
{
	return d1>d2;
}

int main()
{
	int it1=3,it2=4;

	if(istGroesser(it1,it2)) cout << "it1 ist größer it2" << endl;
	else cout << "it1 ist kleiner gleich it2" << endl;

	double dt1=5.4,dt2=4.3;

	if(istGroesser(dt1,dt2)) cout << "dt1 ist größer dt2" << endl;
	else cout << "dt1 ist kleiner gleich dt2" << endl;

	return 0;
}

