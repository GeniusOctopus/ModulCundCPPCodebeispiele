#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char *a1 = (char *)malloc(sizeof(char)*20);

	char *b1 = a1;
	char *f = b1;

	strcpy(f, "Unser Teststring");

	printf("a1: %s\n", a1);
	printf("b1: %s\n", b1);
	printf("f: %s\n", f);
	printf("--------------------------\n");

	strcpy(b1, "Mustermann");
	printf("a1: %s\n", a1);
	printf("b1: %s\n", b1);
	printf("f: %s\n", f);

	free(a1);

	return 0;
}
