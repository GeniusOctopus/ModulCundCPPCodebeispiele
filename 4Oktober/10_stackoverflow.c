#include<stdio.h>
/*keine Abbruchbedingung in der rek Funktion - Stack overflow vorpgrogrammiert*/
int rek(int i)
{
	printf("\ri ist %d",i);
	rek(++i);
	return i;
}

int main(void)
{
	rek(0);
	return 0;
}
