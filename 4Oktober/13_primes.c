#include<stdio.h>

int main(void)
{
	long primes, number, counter;
	short isPrime = 0;

	number = 3;
	printf("Primzahl: 2, , Gefunden: 1, Anteil: %f\n",((double)2/3));
	primes = 1;

	while(1)
	{
		for(counter = 2; counter < number; counter++)
		{	
			if(number%counter==0)
			{
				isPrime = 0;
				break;
			}
			else
				isPrime = 1;
		}
		if(isPrime != 0)
		{
			printf("Primzahl: %ld, Gefunden: %ld,Anteil: %f\n",number,primes,((double)primes/number));
			primes++;
		}

		number=number+2;
	}

	return 0;
}
