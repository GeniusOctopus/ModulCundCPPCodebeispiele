
#include<iostream>
using namespace std;

class vehicle
{
	public:
		int axes;
		int tyres;
	private:
		int tag;
};

class car : public vehicle
{
	public:
		int len;

};

int main()
{
	vehicle v1;
	v1.axes = 3;

	car c1;
	c1.axes = 2;

	v1 = c1;
// geht nicht! c1 = v1; --> Grund, in v1 fehlen Informationen für c1

}

