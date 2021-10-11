/*2 3 5 7 11 ausgeben*/
/*Ausgabe Primzahl, wieviele Prozent vom ganzen Bereich sind Primzahlen und wie viele Rechenoperationen man gebraucht hat*/
#include<stdio.h>

int main(void)
{
	long counter, totalCount, stop, primeCount;

	totalCount=1;
	primeCount=1;
	printf("2");

	while(1)
	{
		totalCount=totalCount+2;
		stop=0;
		for(counter=3; counter<totalCount/2+1; counter=counter+2)
		{
			if(totalCount%counter==0)
			{
				stop=1;
				break;
			}
		}
		if(stop==0) 
		{
			printf("%10ld ",totalCount);
			primeCount++;
			float percentage;
			percentage = primeCount/totalCount*100;
			printf("Anzahl: %ld, Primzahlen: %ld, Anteil: %f\n",totalCount,primeCount,percentage);
		}
	}
	return 0;
}
