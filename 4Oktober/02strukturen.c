#include<stdio.h>

int main(void)
{
	/*Am Besten hier oben Variablen deklarieren. 
	Der Compiler schiebt die sowieso hoch, weil bei EIntritt in die Funktion, die Speicherbereiche klar sein müssen
	*/
	int i;

	/* geht nicht in ansi C
	for (int i=0, i<10, i++)
	{...}
	*/

	for(i=0; i<10; i++)
	{
		printf("i ist %d und i*i ist %d\n",i,(i*i)); /*%d ist Platzhalter für eine dezimale Zahl*/
	}

	return 0;
}
