#include<stdio.h>

void CallByValue(int i)
{
	i = i + 10;
}

void CallByPointer(int *i)
{
	*i = *i + 10;
}

int main(void)
{
	int ii = 4;
	printf("1 ii ist jetzt %d\n",ii);

	CallByValue(ii);
	printf("2 ii ist jetzt %d\n",ii);

	CallByPointer(&ii);
	printf("3 ii ist jetzt %d\n",ii);

	return 0;
}
