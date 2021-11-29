#include<iostream>

using namespace std;

class student
{
	private:
		string vorname = "";
		string nachname = "";
		int mtnr = 0;
	public:
		student() {};
		student(string nachname, string vorname, int mtnr)
		{
			this->vorname = vorname;
			this->nachname = nachname;
			this->mtnr = mtnr;
		}
		friend ostream & operator << (ostream &o, const student &s)
		{
			return o << "Class Student: " << s.nachname << "," << s.vorname << "," << s.mtnr;
		}
};

class dino
{
	private:
		string name = "";
		int legs = 0;
	public:
		dino() {};
		dino(string name, int legs)
		{
			this->name = name;
			this->legs = legs;
		}
		friend ostream & operator << (ostream &o, const dino &d)
		{
			return o << "Class Dino: " << d.name << "," << d.legs;
		}
};

template <class mc>
class element
{
	private:
		mc inhalt;
	public:
		element<mc> * next = NULL;
		element<mc> * prev = NULL;
		element() {};
		element(const mc content)
		{
			this->inhalt = content;
		}
		friend ostream & operator << (ostream &o, const element e) { return o << e.inhalt; }
};

template <class mc>
class vlist
{
	private: 
		element<mc> *elemente = NULL;
		element<mc> *GetFirst()
		{
			element<mc> *temp = elemente;
			while(temp->prev != NULL) temp = temp->prev;
			return temp;
		}
		element<mc> *GetLast()
		{
			element<mc> *temp = elemente;
			while(temp->next != NULL) temp = temp->next;
			return temp;
		}
	public:
		vlist() {};
		void Add(const mc &content)
		{
			if(elemente == NULL) elemente = new element<mc>(content);
			else
			{
				element<mc> * temp = this->GetLast();
				temp->next = new element<mc>(content);
				temp->next->prev = temp;
			}
		}
		void List()
		{
			element<mc> *temp = this->GetFirst();
			while(temp != NULL)
			{
				cout << "Element ist: " << *temp << endl;
				temp = temp->next;
			}
		}
};

int main()
{
	vlist<student> l;
	l.Add(student("Mustermann", "Hans", 1234));
	l.Add(student("Mayer", "Klaus", 1235));
	l.Add(student("Christansen", "Claudia", 1236));

	l.List();

	vlist<dino> d;
	d.Add(dino("Veloceraptor", 2));
	d.Add(dino("T-Rex", 2));

	d.List();

	return 0;
}

