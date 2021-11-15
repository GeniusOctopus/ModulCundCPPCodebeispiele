#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	for(int i=0;i<10;i++)
	{
		cout << setw(10) << i << " | " << setw(12) << i*i << " | " << setw(15) << i*i*i << " | " << endl;
	}
	
	for(int i=0;i<10;i++)
	{
		cout << setiosflags(ios::left) << setw(10) << i << " | " << setw(12) << i*i << " | " << setw(15) << i*i*i << " | " << endl;
	}

	return 0;
}

