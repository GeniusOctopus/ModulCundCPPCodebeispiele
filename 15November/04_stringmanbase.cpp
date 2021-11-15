#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	for(int i = 100; i < 1000; i = i + 50)
	{
		cout << setw(10) << setbase(10) << i << " | " << setbase(16) << "0x" << i << endl;
	}

	return 0;
}

