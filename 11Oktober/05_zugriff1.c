#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char *s = (char *)malloc(sizeof(char)*20);
	char *sc = s;
	int i = 0;

	strcpy(s, "Mustermann");

	printf("s ist [%s], sc ist [%s]\n",s,sc);

	for(i=0;i<20;i++)
	{
		printf("Zeichen %d ist %c\n",i,s[i]);
	}

	printf("----------------------------------------\n");

	for(i=0;i<20;i++,sc++)
	{
		printf("Zeichen %d ist %c\n",i,*sc);
	}

	printf("s ist [%s], sc ist [%s]\n",s,sc);

	free(s);
	
	return 0;
}
