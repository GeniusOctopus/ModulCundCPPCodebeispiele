#include<stdio.h>

int main(void)
{
	unsigned short s1 = 65535;
	unsigned short s2;

	s2 = s1 + 1;

	printf("s1 ist %d\n",s1);
	printf("s2 ist %d\n",s2);

	return 0;
}
