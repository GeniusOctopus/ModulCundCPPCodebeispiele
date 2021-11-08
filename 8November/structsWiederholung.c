#include<stdlib.h>
#include<string.h>
#include<stdio.h>

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
	struct datum *datum;
};

void ausgabe(struct student s)
{
	printf("Student %s, %s, Geboren am %d.%d.%d\n",s.nachname, s.vorname, s.datum->tag, s.datum->monat, s.datum->jahr);
}

int main(void)
{
	struct student s1;

	/*reservieren des Speichers innerhalb des structs*/
	s1.nachname = (char*)malloc(sizeof(char)*64);
	s1.vorname = (char*)malloc(sizeof(char)*64);
	s1.datum = (struct datum*)malloc(sizeof(struct datum)*64);

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
