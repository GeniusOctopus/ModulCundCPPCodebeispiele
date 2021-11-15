#include<iostream>

using namespace std;

class vehicle
{
	private:
		int tyres;
	public:
		vehicle()
		{
			cout << "vehicle()" << endl;
		}
		vehicle(int i)
		{
			cout << "vehicle(int " << i << ")" << endl;
			this->tyres = i;
		}
};

class car : public vehicle
{
	private:
		int axes = 2;
	public:
		car()
		{
			cout << "car()" << endl;
		}
		car(int tyres, int axes) : vehicle(tyres)
		{
			cout << "car(int " << tyres << ", int " << axes << ")" << endl;
			this->axes = axes;
		}
};

int main()
{
	car c1;
	car c2(4, 2);
}

