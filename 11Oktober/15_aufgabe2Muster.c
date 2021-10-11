#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printpuffer(char * s, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("Zeichen an Stelle %d ist %c (%d)\n", i, s[i], (int)s[i]);
	}
}

int main(void)
{
	char * puffer = (char *)malloc(sizeof(char)*2048);
	strcpy(puffer, "musterm:Hans:Mustermann:1999");
	printf("Puffer ist: %s\n",puffer);
	printpuffer(puffer,29);

	char * temp;

	temp = strtok(puffer,":");
	printf("Username ist: %s\n",temp);

	temp = strtok(NULL,":");
	printf("Vorname ist: %s\n",temp);

	temp = strtok(NULL,":");
	printf("Nachname ist: %s\n",temp);

	temp = strtok(NULL,":");
	printf("Geburtsjahr ist: %s\n",temp);

	/*Achtung strtok verädnert den Ausgangsstring*/
	printf("Was ist mit unserem Puffer passiert: %s\n",puffer);
	printpuffer(puffer,29);

	return 0;
}
