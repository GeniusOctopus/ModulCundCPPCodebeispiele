#include<iostream>

using namespace std;

class vehicle
{
	private:
		int axes = 99;
	public:
		void setAxes(int i) { this->axes = i; }
		void debug() { cout << "vehicle.axes: " << this->axes << endl; }
};

class car : public vehicle
{
	private:
		int tyres = 4;
	public:
		int axes = 55;
		void setAxesTyres(int a, int t) { this->axes = a; this->tyres = t; }
		void setAxesV(int a) { vehicle::setAxes(a); }
		void debug() { vehicle::debug(); cout << "car.axes: " << this->axes << " car.tyres: " << this->tyres << endl; } 
};

int main()
{
	car c1;
	c1.setAxesV(2);
	cout << "Output: " << c1.axes << endl;
	c1.debug();
}

