#include<stdio.h>

int main(void)
{
	short so = 0;

	do
	{
		printf("Unser short ist %d\n",so);
		so++;
	} while(so<10);

	return 0;
}
