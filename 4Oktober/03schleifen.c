#include<stdio.h>

int main(void)
{
	/*Jede for-Schleife wird im Compiler zu while mit goto gemacht.
	Es gibt also eigentlich keine for-Schleife.
	For ist nur ein Konstrukt, um den Code schlanker zu machen.
	*/

	int i;

	for(i=0; i<10; i++)
	{
		printf("Ausgabe for -> i ist %d\n",i);
	}

	printf("----------------------------------------\n");
	
	i=0; /*for erster Teil*/
	while(i<10)
	{
		printf("Ausgabe while -> i ist %d\n",i);
		i++; /*i erhöhen*/
	}

	printf("----------------------------------------\n");

	/*Alternative:*/

	i=0;
	while(1)
	{
		/*Unendlichschleife abbrechen*/
		if(i>=10) break;
		printf("Ausgabe while break -> i ist %d\n",i);
		i++;
	}

	printf("----------------------------------------\n");

	/*Noch eine Alternative:*/

	i=0;
	while(1)
	{
		printf("Ausgabe while continue -> i ist %d\n",i);
		i++;

		if(i<10) continue;
		break;
	}
}
