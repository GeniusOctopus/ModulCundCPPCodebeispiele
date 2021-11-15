#include<iostream>

using namespace std;

void CallByValue(int i)
{
	cout << "CallByValue, i ist Anfangs " << i << endl;
	i = 100;
	cout << "CallByValue, i ist am Ende " << i << endl;
}

// Call by Ref - > geht nur in c++!
void CallByReference(int &i)
{
	cout << "CallByReference, i ist Anfangs " << i << endl;
	i = 200;
	cout << "CallByReferenceValue, i ist am Ende " << i << endl;
}

// Call by Ptr - > geht in c und c++!
void CallByPointer(int *i)
{
	cout << "CallByPointer, *i ist Anfangs " << *i << endl;
	*i = 300;
	cout << "CallByPointer, *i ist am Ende " << *i << endl;
}

int main()
{
	int z = 5;
	cout << "z = " << z << endl;
	CallByValue(z);
	cout << "z = " << z << endl << "------------------------------------------" << endl;

	int y = 6;
	cout << "y = " << y << endl;
	CallByReference(y);
	cout << "y = " << y << endl << "------------------------------------------" << endl;

	int x = 7;
	cout << "x = " << x << endl;
	CallByPointer(&x);
	cout << "x = " << x << endl << "------------------------------------------" << endl;
	
	return 0;
}

