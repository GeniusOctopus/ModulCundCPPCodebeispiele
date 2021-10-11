#include<stdio.h>
#include<stdlib.h>

char * mystrcpy(char * dest, char * source)
{
	/*Methode Student*/
	int i = 0;
	for(i=0; source[i]!='\0'; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';
}

char * mystrcpychrack(char * dest, char * source)
{
	/*C++ Chrack*/
	for(;*source!='\0';*dest=*source,dest++,source++);
	*dest = '\0';
}

int main(void)
{
	char *a1 = (char *)malloc(sizeof(char)*20);

	mystrcpy(a1,"Mustermann1");
	printf("Der Inhalt von a1 ist jetzt %s an Speicheradresse %p\n",a1,a1);
	mystrcpychrack(a1,"Mustermann2");
	printf("Der Inhalt von a1 ist jetzt %s an Speicheradresse %p\n",a1,a1);

	free(a1);
	a1 = NULL;

	return 0;
}
