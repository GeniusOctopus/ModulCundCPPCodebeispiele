#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
        char *a1 = (char *)malloc(sizeof(char)*10);
        strcpy(a1, "Robert");
 
        char a2[] = "Hans";

        char *b1 = a1;
        char *b2 = a2;

 	char *e = b1;
        char *f = a1;

        f = e;

        e = f;
        strcpy(e,"Karl");

        printf("Ausagbe a1: %s\n",a1);
        printf("Ausagbe a2: %s\n",a2);
        printf("Ausagbe b1: %s\n",b1);
        printf("Ausagbe b2: %s\n",b2);

	printf("Ausgabe f: %s\n",f);

	free(a1);

	a1 = NULL;
	b1 = NULL;
	f = NULL;
	e = NULL;

	return 0;
}
