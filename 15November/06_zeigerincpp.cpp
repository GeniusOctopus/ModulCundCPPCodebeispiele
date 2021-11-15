#include<iostream>
#include<iomanip>
#include<string.h> // strcpy aus C

int main()
{
	// Int Zeiger erzeugen
	int *i = NULL;
	i = new int;

	// Wert in int Zeiger
	*i = 5;
	
	std::cout << "i ist " << std::setbase(16) << i << " und der Inhalt " << std::setbase(10) << *i << std::endl;

	// Speicher freigeben
	delete i;

	// Zeigervektor erzeigen - am Beispiel von char
	char *s = NULL;
	s = new char[255];

	strcpy(s,"Mustermann");

	std::cout << "Der Inhalt von s ist: " << s << std::endl;

	delete [] s; // freigeben von Vektoren

	// feste und statische Reservierung
	char us[25];
	strcpy(us,"Test");
	std::cout << "us ist: " << us << std::endl;

	return 0;
}
