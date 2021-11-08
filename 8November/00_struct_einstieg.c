#include<stdlib.h>
#include<string.h>
#include<stdio.h>

/*Verwendung von typedef spart später die Angabe von struct ... */
typedef struct datum datum;
typedef struct student student;

struct datum
{
	int tag;
	int monat;
	int jahr;
};

struct student
{
	char *nachname;
	char *vorname;
	datum *datum; /*Schlüsselwort struct kann weggelassen werden*/
};

void ausgabe(student s)
{
	printf("Student %s, %s, Geboren am %d.%d.%d\n",s.nachname, s.vorname, s.datum->tag, s.datum->monat, s.datum->jahr);
}

int main(void)
{
	student s1;

	/*reservieren des Speichers innerhalb des structs*/
	s1.nachname = (char*)malloc(sizeof(char)*64);
	s1.vorname = (char*)malloc(sizeof(char)*64);
	s1.datum = (struct datum*)malloc(sizeof(datum)*64); /*struct kann weggelassen werden*/

	strcpy(s1.nachname,"Mustermann");
	strcpy(s1.vorname,"Hans");
	s1.datum->tag = 4;
	s1.datum->monat = 5;
	s1.datum->jahr = 1966;

	ausgabe(s1);

	free(s1.datum);
	free(s1.nachname);
	free(s1.vorname);

	return 0;
}
