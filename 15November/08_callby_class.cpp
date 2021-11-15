#include<iostream>

using namespace std;

class classdate
{
	public:
		int day;
		int month;
		int year;
};

void CallByRef(classdate &d)
{
	d.day = 2;
	d.month = 3;
	d.year = 2011;
}

void CallByPtr(classdate *d)
{
	d->day = 8;
	d->month = 9;
	d->year = 2020;
}

int main()
{
	classdate cd1,cd2;

	CallByRef(cd1);
	CallByPtr(&cd2);

	cout << "cd1 " << cd1.day << "." << cd1.month << "." << cd1.year << endl;
	cout << "cd2 " << cd2.day << "." << cd2.month << "." << cd2.year << endl;

	return 0;
}

