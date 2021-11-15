#include "animal.hpp"
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char * species = NULL;
	species = new char[255];
	strcpy(species, "Canis lupus");

	animal a1(4, 80);
	animal a2(species);

	animal *a3 = new animal(4, 100, species);
	delete species;

	return 0;
}

