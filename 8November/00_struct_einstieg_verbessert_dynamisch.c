#include<stdlib.h>
#include<stdio.h>
#include<string.h>

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
	struct datum *gebdatum;
};

int main(void)
{
	struct student *sd1 = NULL;
	
	/* Reservieren von Speicher sd1 = 24 Bytes */
	sd1 = (struct student *)malloc(sizeof(struct student));
	
	/* Reservieren von Speicher für den Inhalt 20 + 20 + 3*4 Bytes */
	sd1->vorname = (char *)malloc(sizeof(char)*20);
	sd1->nachname = (char *)malloc(sizeof(char)*20);
	sd1->gebdatum = (struct datum *)malloc(sizeof(struct datum));

	strcpy(sd1->vorname,"Hans"); /* -> zeigt auf Operator, um Zeigervariablen anzusprechen */
	strcpy(sd1->nachname,"Mustermann"); /* geht auch mit Dereferenzierung (*sd1).nachname */
	sd1->gebdatum->tag = 5;
	sd1->gebdatum->monat = 6;
	sd1->gebdatum-gebdatum->jahr = 1966;

	printf("Data: %s/%s - %d.%d.%d\n",sd1->vorname,sd1->nachname,sd1.>gebdatum->tag,sd1->gebdatum->monat,sd1->gebdatum->jahr);

	/* wegen Abhängigkeiten erst Subelemente freigeben */
	free(sd1->vorname);
	free(sd1->nachname);
	free(sd1->gebdatum);

	free(sd1);

	return 0;
}
