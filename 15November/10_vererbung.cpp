#include<iostream>

using namespace std;

class vehicle
{
	public:
		int axes;
		int tyres;
};

class car : public vehicle
{
	public:
		int len;
};

// Man kann innerhalb der Klasse auf die Member von vehicle zugreifen aber nicht von ausserhalb
class car_private : private vehicle
{
	public:
		int len;
		void setAxes(int i) { vehicle::axes = i; }
		int getAxes() { return vehicle::axes; }
		void setTyres(int i) { vehicle::tyres = i; }
		int getTyres() { return vehicle::tyres; }
};

int main()
{
	vehicle v1 ;

	v1.axes = 2;
	v1.tyres = 4;

	cout << "v1: " << v1.axes << "/" << v1.tyres << endl;
	
	car c1 ;

	c1.axes = 2;
	c1.tyres = 4;
	c1.len = 500;

	cout << "c1: " << c1.axes << "/" << c1.tyres << "/" << c1.len << endl;
	
	car_private c2;

	c2.setAxes(2);
	c2.setTyres(4);
	c2.len = 500;

	cout << "c2: " << c2.getAxes() << "/" << c2.getTyres() << "/" << c2.len << endl;
	// auf axes und tyres kann nicht direkt zugegriffen werden, weil die Klasse die Klassenattribute und funktionen der Masterklasse nur private übernimmt
}

