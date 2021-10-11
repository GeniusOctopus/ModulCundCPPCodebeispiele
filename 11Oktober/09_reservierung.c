#include<string.h>
#include<stdlib.h>
#include<stdio.h>

/* NONSENSE CODE */

void mymalloc(char * src, int size)
{
	src = (char*)malloc(sizeof(char)*size);
}

int main(void)
{
	char * s = NULL;
	mymalloc(s, 20);

	strcpy(s,"Mustermann");

	printf("Ausgabe: %s\n",s);

	free(s);
	return 0;
}
