#include<stdlib.h>
#include<stdio.h>

unsigned long getDecVal(unsigned long x, unsigned long y);

unsigned long posrev(unsigned long val)
{
	if(val < 10)
		return val;
	
	return val % 10 * getDecVal(val, 1) + posrev(val / 10);
}

unsigned long getDecVal(unsigned long x, unsigned long y)
{
	if ((x/y) >= 10)
		getDecVal(x, y*10);
	else
		return y;
}

int main(void)
{
	unsigned long number1 = 12345;
	unsigned long reversedNumber1 = posrev(number1);

	printf("Number 1: %ld\n", number1);
	printf("Reversed Number 1: %ld\n", reversedNumber1);
	printf("---------------------------------------------------------------------------------------------------\n");	
	
	unsigned long number2 = 20;
	unsigned long reversedNumber2 = posrev(number2);

	printf("Number 2: %ld\n", number2);
	printf("Reversed Number 2: %ld\n", reversedNumber2);
	printf("---------------------------------------------------------------------------------------------------\n");	
	
	unsigned long number3 = 4;
	unsigned long reversedNumber3 = posrev(number3);

	printf("Number 3: %ld\n", number3);
	printf("Reversed Number 3: %ld\n", reversedNumber3);
	printf("---------------------------------------------------------------------------------------------------\n");	
	
	unsigned long number4 = 71;
	unsigned long reversedNumber4 = posrev(number4);

	printf("Number 4: %ld\n", number4);
	printf("Reversed Number 4: %ld\n", reversedNumber4);

	return 0;
}
