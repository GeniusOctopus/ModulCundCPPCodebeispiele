#include "animal.hpp"
#include<iostream>
#include<string.h>

#ifndef animal_cpp
#define animal_cpp
using namespace std;

animal::animal()
{
	cout << "animal()" << endl;
}

animal::animal(char *species)
{
	cout << "animal(char *)" << endl;
	this->species = new char[strlen(species)];
	strcpy(this->species, species);
	cout << "species = " << species << endl;
}

animal::animal(int legCount, int weight)
{
	cout << "animal(int,int)" << endl;
	this->legCount = legCount;
	this->weight = weight;
	cout << "legCount = " << legCount << ", weight = " << weight << endl;
}

animal::animal(int legCount, int weight, char *species)
{
	cout << "animal(int,int,char*)" << endl;
	this->legCount = legCount;
	this->weight = weight;
	this->species = new char[strlen(species)];
	strcpy(this->species, species);
	cout << "legCount = " << legCount << ", weight = " << weight << ", species = " << species << endl;
}

void animal::setLegCount(int legCount)
{
	this->legCount = legCount;
}

void animal::setWeight(int weight)
{
	this->weight = weight;
}

int animal::getLegCount()
{
	return this->legCount;
}

int animal::getWeight()
{
	return this->weight;
}

char *animal::getSpecies()
{
	return this->species;
}

#endif
