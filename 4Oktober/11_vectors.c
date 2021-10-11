#include<stdio.h>
#include<string.h>

int main(void)
{
	char s1[10] = "Hans";
	char s2[20] = "Mustermann";

	printf("Werte sind %s, %s\n", s1, s2);

	strcpy(s1,"Karl");
	strcpy(s2,"der Grosse");

	strcat(s1, "..");

	printf("Werte sind %s, %s\n", s1, s2);

	int z;
	for(z=0; z<10; z++)
	{
		printf("Zeichen %d ist %c\n",z,s1[z]);
	}

	/*Achtung, Speicherbereich! Zugriff von s1 auf Teile von s2*/
	for(z=0; z<30; z++)
	{
		printf("Zeichen %d ist %c\n",z,s1[z]);
	}

	/*
	for(z=0; z<30; z++)
	{
		printf("Zeichen %d ist %c [Dec: %d]\n",z,s1[z],s1[z]);
	}
	*/

	strcpy(s1,"Karl1234567");
	printf("Werte in s1 sind %s\n", s1);
	printf("Werte in s2 sind %s\n", s2);

	return 0;
}
