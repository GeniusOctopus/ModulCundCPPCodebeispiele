#include<stdio.h>

int main(void)
{
	short s1[10]; /*Vektor*/
	short s[10][10]; /*Multivektor*/

	int i,a,z;

	/* Eingabe/Init */
	for(i=0, z=0; i<10; i++)
		for(a=0; a<10; a++) s[i][a] = z++;
	
	for(i=0; i<10; i++)
	{
		for(a=0; a<10; a++) printf("%5d ", s[i][a]);
		printf("\n");
	}

	printf("Sonderausgaben:\n");
	printf("s[8][7]: %d\n",s[8][7]);
	printf("Sonderausgaben mit Überlauf:\n");
	printf("s[2][12]: %d\n", s[2][12]);
	printf("s[2][24]: %d\n", s[2][24]);

	return 0;
}
