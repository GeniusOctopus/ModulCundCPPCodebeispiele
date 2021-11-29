#include<iostream>
#include<string>

using namespace std;

class student
{
	public:
		string name = "";
		int mtnr = 0;
		student() {};
		student(string n, int nr)
		{
			this->name = n;
			this->mtnr = nr;
		}
		friend ostream & operator << (ostream &o, const student &s)
		{
			return o << "Klasse Student: " << s.name << "/" << s.mtnr;
		}
};

class mitarbeiter
{
	public:
		string nachname = "";
		string vorname = "";
		int pnr = 0;
		mitarbeiter() {};
		mitarbeiter(string n, string v, int p)
		{
			this->nachname = n;
			this->vorname = v;
			this->pnr = p;
		}
		friend ostream & operator << (ostream &o, const mitarbeiter &m)
		{
			return o << "Klasse Mitarbeiter: " << m.nachname << "/" << m.vorname << "/" << m.pnr;
		}
};

class dozent
{
	public:
		string nachname = "";
		string vorname = "";
		string modul = "";
		int unterrichtszeit = 0;
		int gehalt = 0;
		dozent() {};
		dozent(string n, string v, string m, int u, int g)
		{
			this->nachname = n;
			this->vorname = v;
			this->modul = m;
			this->unterrichtszeit = u;
			this->gehalt = g;
		}
		friend ostream & operator << (ostream &o, const dozent &d)
		{
			return o << "Klasse Dozent: " << d.nachname << "/" << d.vorname << "/" << d.modul << "/" << d.unterrichtszeit << "/" << d.gehalt;
		}
};

template<class myclass>
class container
{
	public:
		myclass content;
		int tag = 0;
		int version = 0;
		container() {};
		container(myclass c, int t, int v)
		{
			this->content = c;
			this->tag = t;
			this->version = v;
		}
		friend ostream & operator << (ostream &o, container<myclass> c)
		{
			return o << "Container für " << c.content;
		}
};

int main()
{
	student st1("Mustermann Hans", 444);
	container<student> c1(st1, 0, 1);
	cout << "Test1: " << c1 << endl;

	mitarbeiter ma1("Mayer", "Hans Gerhard", 111);
	container<mitarbeiter> c2(ma1, 0, 1);
	cout << "Test2: " << c2 << endl;

	dozent dz1("Müller", "Klaus Herbert", "Computergrafik", 60, 42069);
	container<dozent> c3(dz1, 0, 1);
	cout << "Test3: " << c3 << endl;
}

