#include<stdio.h>   /*printf*/
#include<string.h>  /*strcpy*/
#include<stdlib.h>  /*malloc, free*/

int main(void)
{
	char s1[100];					/*statisches alloc - Speicher adresse im statischen Bereich*/

	char *s2 = NULL;				/*Speichervariable*/
	s2 = (char *)malloc(sizeof(char) * 100);	/*dynamisches alloc*/

	strcpy(s1, "Inhalt in s1");
	strcpy(s2, "Inhalt in s2");

	printf("s1 ist: %s\n",s1);
	printf("s2 ist: %s\n",s2);

	printf("Zeichen 1 von s1 ist %c\n",*s1);	/*%c ist wieder Value und muss dereferenziert werden*/
	printf("Zeichen 1 von s2 ist %c\n",*s2);	/*%c ist wieder Value und muss dereferenziert werden*/

	free(s2);					/*dynamischen Speicher freigeben*/
	s2 = NULL;					/*Reservierungsvariable auf NULL setzen*/

	/*s1 ist weiterhin vorhanden*/

	return 0;
}
