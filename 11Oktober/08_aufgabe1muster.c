#include<stdio.h>
#include<stdlib.h>

char * mystrcpy(char * dest, char * source)
{
	for(;*source!='\0';*dest=*source,dest++,source++)
	*dest='\0';
	return dest;
}

char * mystrcat(char * dest, char * source)
{
	for(;*dest!='\0';dest++);
	return mystrcpy(dest, source);
}

int main(void)
{
	char *a1 = (char *)malloc(sizeof(char)*20);

	mystrcpy(a1,"Mustermann, ");
	printf("Der Inhalt von a1 ist jetzt %s an Speicheradresse %p\n",a1,a1);

	mystrcat(a1,"Hans");
	printf("Der Inhalt von a1 ist jetzt %s an Speicheradresse %p\n",a1,a1);

	free(a1);
	a1 = NULL; /*a1=0*/

	return 0;
}
