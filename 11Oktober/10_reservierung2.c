#include<string.h>
#include<stdlib.h>
#include<stdio.h>

/* NONSENSE CODE */

void mystrcat(char * dst, char * src)
{
	int newlen = strlen(dst) + strlen(src);
	char *newdest = (char *)malloc(sizeof(char)*newlen + 1);
	strcpy(newdest, dst);
	strcat(newdest, src);

	printf("newdest ist jetzt: %s\n",newdest);

	dst = newdest;
}

int main(void)
{
	char * s = (char *)malloc(sizeof(char)*10);
	strcpy(s, "Mustermann");

	mystrcat(s, ", Hans");
	

	printf("Ausgabe: %s\n",s);

	free(s);
	return 0;
}
