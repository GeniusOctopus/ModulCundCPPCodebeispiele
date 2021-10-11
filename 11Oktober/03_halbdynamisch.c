#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int *i = NULL;

	/* Reservieren des dynamischen Speichers */
	i = (int *)malloc(sizeof(int)*1);

	*i = 100;

	printf("i ist %d und befindet sich an Speicheradresse %p\n",*i,i);

	/* Speicher freigeben*/
	free(i);

	i = NULL;

	return 0;
}

/*
	Ausgabe
	i ist 100 und befindet sich an Speicheradresse 0x560a53b3b2a0
*/
