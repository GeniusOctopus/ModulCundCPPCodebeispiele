#ifndef crational_h
#define crational_h

#include<iostream>
using namespace std;

class crational
{
	private:
		int numerator = 0;	// Zähler
		int denominator = 1;	// Nenner
		void shorten();
		int gcd(int, int);
	public:
		crational();		// default ctor
		crational(int);
		crational(int, int);
		crational(double);
		crational(const crational &);	// copy ctor
		~crational();

		crational& operator = (const crational &);	// Zuweisungsoperator
		crational operator + (const crational &);
		crational operator - (const crational &);
		crational  operator * (const crational &);
		//crational& operator * (const crational &);
		crational operator / (const crational &);
		crational& operator += (const crational &);
		crational& operator -= (const crational &);
		crational& operator *= (const crational &);
		crational& operator /= (const crational &);
		crational& operator ++ ();
		crational& operator ++ (int);
		crational& operator -- ();
		crational& operator -- (int);
		bool operator == (const crational &);
		bool operator != (const crational &);
		operator double();
		// Aufgaben in den Gruppenarneiten
		/* Operatoren: - und / 
		   Operatoren: += und -= und /=
		   Operatoren: ++ und -- sowohl für v++ als auch ++v
		   */

		friend ostream & operator << (ostream &, const crational &);

		void output();		// temp. , wird später erstetzt
};
#endif
