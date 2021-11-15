#include<iostream>
#include<iomanip>

using namespace std;

class student
{
	// inline Code
	private:
		int mnr = 0;

	public:
		void setMnr(int mnr)
		{
			this->mnr = mnr; // das ist unsauber, in neueren Projekten wäre int _mnr = 0; geschrieben worden und this->_mnr
		}

		int getMnr() { return this->mnr; }

	protected:
};

int main()
{
	// Statisch im Speicher
	student s1;
	s1.setMnr(44444);

	cout << "Matrikelnummer ist: " << setw(10) << s1.getMnr() << endl;

	// Dynamische Speicherverwendung
	student *s2 = NULL;
	s2 = new student; // Speicher allokieren

	s2->setMnr(53443);
	cout << "Matrikelnummer ist hier: " << setw(10) << s2->getMnr() << endl;

	delete s2; // Speicher freigeben
	// Hinweis: jedes malloc brauch ein free, jedes new ein delete!

	return 0;
}

