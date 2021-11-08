#include<stdlib.h> /*malloc und free*/
#include<string.h> /*strcpy*/
#include<stdio.h> /*printf*/

int main(void)
{
	char *s1 = NULL;
	char *s2 = NULL;

	/*Reservieren von Speicher*/
	s1 = (char*)malloc(sizeof(char)*20);
	s2 = (char*)malloc(sizeof(char)*20);

	/*Einagbe der Daten*/
	strcpy(s1,"Mustermann");
	strcpy(s2,"Hans");

	printf("Ausgabe von s1: %s (Adresse: %p)\n",s1,s1);
	printf("Ausgabe von s2: %s (Adresse: %p)\n",s2,s2);

	printf("Realloc s1 mit 22 bytes (noch keine Änderung)\n");
	s1 = realloc(s1,25);
	printf("Ausgabe von s1: %s (Adresse: %p)\n",s1,s1);
	printf("Ausgabe von s2: %s (Adresse: %p)\n",s2,s2);
	
	printf("Realloc s1 mit 30 bytes (hier wird die Adresse geändert)\n");
	s1 = realloc(s1,30);
	printf("Ausgabe von s1: %s (Adresse: %p)\n",s1,s1);
	printf("Ausgabe von s2: %s (Adresse: %p)\n",s2,s2);

	/*Freigabe des Speichers im Heap*/
	free(s1);
	free(s2);

	return 0;
}
