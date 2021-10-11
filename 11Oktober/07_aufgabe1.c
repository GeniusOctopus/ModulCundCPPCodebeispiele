/*
Umsetzen der Funktion mystrcat
mystrcpy -> überschreibt den Speicher
mystrcat -> anhängen an den alten string
*/
#include<stdio.h>
#include<stdlib.h>

char * mystrcpychrack(char * dest, char * source)
{
        /*C++ Chrack*/
        for(;*source!='\0';*dest=*source,dest++,source++);
        *dest = '\0';
}

char * mystrcat (char * dest, char * src)
{
	for(;*dest!='\0';dest++);
        for(;*src!='\0';*dest=*src,dest++,src++);
        *dest = '\0';
}

int main(void)
{
	char *s = (char *)malloc(sizeof(char)*40);
	mystrcpychrack(s, "Max ");

	mystrcat(s,"Mustermann");

	printf("Der Wert von s ist: %s\n",s);

	return 0;
}
