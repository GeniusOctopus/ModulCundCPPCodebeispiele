#ifndef crational_cpp
#define crational_hpp

#include "crational.hpp"
#include <iostream>

using namespace std;

crational::crational()
{
	cout << "crational(): " << this << endl;
	shorten();
}

crational::crational(int n)
{
	cout << "crational(int): " << this << endl;
	this->numerator = n;
	shorten();
}

crational::crational(int n, int d)
{
	cout << "crational(int, int): " << this << endl;
	this->numerator = n;
	this->denominator = d;
	shorten();
}

crational::crational(double d)
{
	cout << "crational(double) " << this << endl;
	//eigene Lösung
	/*	
	int numberOfDecimals = 0;
	int tempDen = 10;
	double tempD = d;
	int tempDInt = (int) d;

	while(tempD != (double)tempDInt)
	{
		tempD *= 10;
		tempDInt = (int)tempD;
		numberOfDecimals++;
	}

	this->numerator = d * numberOfDecimals;

	for(int i = 0; i < numberOfDecimals; i++)
	{
		tempDen *= 10;
	}

	this->numerator = d * tempDen;
	this->denominator = tempDen;

	this->shorten();*/

	int fact;
	for(fact = 1; d*fact<4000000000.0;fact*=10)
	{
		int testi = d*fact;
		if ( (double)testi == d*fact) break;
	}
	this->numerator = d*fact;
	this->denominator = fact;
	this->shorten();
}

crational::crational(const crational &c)
{
	cout << "crational(const crational &): " << this << endl;
	this->numerator = c.numerator;
	this->denominator = c.denominator;
}

crational::~crational()
{
	cout << "~crational(): " << this << endl;
}

// =
crational& crational::operator = (const crational & c)
{
	cout << "operator = (const crational & (" << c.numerator << "/" << c.denominator << ")" << endl;
	this->numerator = c.numerator;
	this->denominator = c.denominator;
	this->shorten();
	return *this;
}

// +
crational crational::operator + (const crational &c)
{
	crational temp(this->numerator, this->denominator);
	temp.numerator = this->numerator*c.denominator + c.numerator*this->denominator;
	temp.denominator = this->denominator*c.denominator;
	temp.shorten();
	return temp;
}

// -
crational crational::operator - (const crational &c)
{
	crational temp(this->numerator, this->denominator);
	temp.numerator = this->numerator*c.denominator - c.numerator*this->denominator;
	temp.denominator = this->denominator*c.denominator;
	temp.shorten();
	return temp;
}

crational crational::operator * (const crational &c)
{
	crational temp(this->numerator, this->denominator);
	temp.numerator = temp.numerator*c.numerator;
	temp.denominator = temp.denominator*c.denominator;
	return temp;
}
/* Fehler, Rechenoperator als Zuweisungsoperator verwendet
crational& crational::operator * (const crational &c)
{
	temp.numerator = temp.numerator*c.numerator;
	temp.denominator = temp.denominator*c.denominator;
	return *this;
}*/

// /
crational crational::operator / (const crational &c)
{
	crational temp(this->numerator, this->denominator);
	temp.numerator = temp.numerator*c.denominator;
	temp.denominator = temp.denominator*c.numerator;
	return temp;
}

// +=
crational& crational::operator += (const crational &c)
{
	this->numerator = this->numerator*c.denominator + c.numerator*this->denominator;
	this->denominator = this->denominator*c.denominator;
	this->shorten();
	return *this;
}

// -=
crational& crational::operator -= (const crational &c)
{
	this->numerator = this->numerator*c.denominator - c.numerator*this->denominator;
	this->denominator = this->denominator*c.denominator;
	this->shorten();
	return *this;
}

// *=
crational& crational::operator *= (const crational &c)
{
	this->numerator = this->numerator*c.numerator;
	this->denominator = this->denominator*c.denominator;
	this->shorten();
	return *this;
}

// /=
crational& crational::operator /= (const crational &c)
{
	this->numerator = this->numerator*c.denominator;
	this->denominator = this->denominator*c.numerator;
	this->shorten();
	return *this;
}

// ++v
crational& crational::operator ++ ()
{
	this->numerator = this->numerator + this->denominator;
	this->shorten();
	return *this;
}

// --v
crational& crational::operator -- ()
{
	this->numerator = this->numerator - this->denominator;
	this->shorten();
	return *this;
}

// v++
crational& crational::operator ++ (int i)
{
	crational temp = *this;
	temp.operator+=(i);
	temp.operator++();
	this->shorten();
	return temp;
}

// v--
crational& crational::operator -- (int i)
{
	crational temp = *this;
	temp.operator-=(i);
	temp.operator--();
	this->shorten();
	return temp;
}

bool crational::operator == (const crational &c)
{
	this->shorten();
	if ( this->numerator == c.numerator && this->denominator == c.denominator ) return true;
	else return false;
}

bool crational::operator != (const crational &c)
{
	return !this->operator==(c);
}

crational::operator double()
{
	return (double)this->numerator/this->denominator;
}

ostream& operator << (ostream &o, const crational & c)
{
	return o << "(" << c.numerator << "/" << c.denominator << ")";
}

void crational::output()
{
	cout << "(" << this->numerator << "/" << this->denominator << ")";
}

int crational::gcd(int a, int b)
{
	if (b==0) return a;
	return this->gcd(b,a%b);
}

void crational::shorten()
{
	cout << "shorten(): " << endl;
	
	//eigene Lösung
	/*
	int numTemp = this->numerator;
	int denTemp = this->denominator;

	while(denTemp != 0)
	{
		int temp = numTemp%denTemp;
		numTemp = denTemp;
		denTemp = temp;
	}

	this->numerator = this->numerator / numTemp;
	this->denominator = this->denominator / numTemp;*/

	int divisor = this->gcd(this->numerator, this->denominator);
	this->numerator /= divisor;
	this->denominator /= divisor;
}

#endif
