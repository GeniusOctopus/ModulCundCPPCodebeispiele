#include<iostream>
#include<iomanip>

// Wenn man nicht immer std:: für den Namespace der Standardbibliothek schreiben möchte
using namespace std;

int main()
{
	cout << "Erste Ausgabe" << endl;
	cout << "Zweite Ausgabe\n";

	int i;
	cout << "Geben Sie einen Wert für i an: ";
	cin >> i;

	cout << "Der engegebene Wert für i war: " << i << endl;

	// Verwenden von Manipulation

	int i2 = 5;
	cout << "Hier für den Wert [" << setw(10) << i2 << "] hier nach dem Wert" << endl; // setw setzt für die Variable eine bestimmte Breite
	cout << "Hier für den Wert [" << setw(5) << setfill('0') << i2 << "] hier nach dem Wert" << endl;

	return 0;
}

