#include<stdio.h>

int main(void)
{
	long primes, number, counter;
	short isPrime = 0;
	long primeList[600000];
	int operations = 0;

	number = 3;
	printf("Primzahl: 2, , Gefunden: 1, Anteil: %f\n",(2.0/3.0));
	primes = 1;
	primeList[0] = 2;

	while(1)
	{
		for(counter = 0; primeList[counter] != 0 && primeList[counter] / 2 < number + 1; counter++)
		{
			if(number%primeList[counter]==0)
			{
				isPrime = 0;
				break;
			}
			else
				isPrime = 1;

			operations++;
		}
		if(isPrime != 0)
		{
			printf("Primzahl: %ld, Gefunden: %ld,Anteil: %f, Rechenschritte: %d\n",number,primes,((double)primes/number), operations);
			primeList[counter] = number;
			primes++;
		}

		number=number+2;
	}

	return 0;
}
