#include "chicken.hpp"
#include<iostream>

#ifndef chicken_cpp
#define chicken_cpp
using namespace std;

chicken::chicken()
{
	cout << "chicken();" << endl;
}

chicken::chicken(int foot)
{
	cout << "chicken(int)" << endl;
	this->foot = foot;
}

chicken::chicken(int foot, int featherWeight)
{
	cout << "chicken(int,int)" << endl;
	this->featherWeight = featherWeight;
}

void chicken::setFoot(int foot)
{
	this->foot = foot;
}

void chicken::setFeatherWeight(int featherWeight)
{
	this->featherWeight = featherWeight;
}

int chicken::getFoot()
{
	return this->foot;
}

int chicken::getFeatherWeight()
{
	return this->featherWeight;
}
#endif

