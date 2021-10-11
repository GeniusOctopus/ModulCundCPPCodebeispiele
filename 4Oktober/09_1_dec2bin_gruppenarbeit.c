/* 555 -> 1000101011 */
#include<stdio.h>

int getBinary(int a)
{
	if(a>0)
	{
		getBinary(a/2);
		printf("%d",a%2);
	}
}

int main(void)
{
	int i = 555;
	getBinary(i);
	printf("\n");
	return 0;
}
