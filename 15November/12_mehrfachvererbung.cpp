#include<iostream>

class vehicle
{
	public:
		int tyres;
};

class engine
{
	public:
		int hp;
};

class car : public vehicle, public engine
{
	public:
		int axes;
};

int main()
{
	car c1;
	c1.tyres = 4;	// aus vehicle
	c1.hp = 200;	// aus engine
	c1.axes = 2;

	std::cout << "c1: " << c1.tyres << "/" << c1.hp << "/" << c1.axes << std::endl;

	return 0;
}

