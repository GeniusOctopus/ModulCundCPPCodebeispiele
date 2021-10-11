#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
int main(int arg, char **argv)
{*/
	/* arg = Anzahl der Argumente */
	/* argv = Zeiger auf Zeiger der Argumente */
/*	
	int arg=5;
	char **argv = NULL;



	int i;

	for(i=0; i<arg; i++)
	{
		printf("Argument %d ist %s\n", i, argv[i]);
	}

	return 0;
}
*/
int main(void)
{
	int arg=5,i;
	char **argv = NULL;

	/*ERSTE EBENE*/
	argv = (char **)malloc(sizeof(char *) * arg);
				      /*(8 * 5 = 40)*/
	/*ZWEITE EBENE*/
	argv[0] = (char *)malloc(sizeof(char)*20);
	argv[1] = (char *)malloc(sizeof(char)*20);
	argv[2] = (char *)malloc(sizeof(char)*20);
	argv[3] = (char *)malloc(sizeof(char)*20);
	argv[4] = (char *)malloc(sizeof(char)*20);
	
	strcpy(argv[0], "Hans");
	strcpy(argv[1], "Karl");
	strcpy(argv[2], "Friedrich");
	strcpy(argv[3], "Joseph");
	strcpy(argv[4], "Tina");

	for(i=0; i<arg; i++)
	{
		printf("Argument %d ist %s\n", i, argv[i]);
	}

	/*Freigeben zweite Ebene*/
	for(i=0; i<arg; i++) free(argv[i]);

	/*Freigeben erste Ebene*/
	free(argv);

	return 0;
}
