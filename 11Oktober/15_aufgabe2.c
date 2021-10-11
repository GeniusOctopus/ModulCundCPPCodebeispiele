/*
String zerlegen mit strtok:
username:vorname:nachname:geburtsjahr

Ausgabe:
Username ist: username
Nachname ist: nachname
Vorname ist: vorname
Geburtsjahr ist: geburtsjahr
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char * puffer = (char *)malloc(sizeof(char)*2048);
	strcpy(puffer, "musterm:Hans:Mustername:1999");
	const char s[2] = ":";
	char * token;
	/*Achtung: Risiko*/
	
	token = strtok(puffer, s);

	while(token != NULL)
	{
		printf(" %s\n",token);
		token = strtok(NULL,s);
	}

	return 0;
}
