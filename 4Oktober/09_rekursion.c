#include<stdio.h>

void minus(int i)
{
	if(i>10) return;
	printf("vor rekursion ist i %d\n",i);
	minus(++i);
	printf("nach rekursion ist i %d\n",i);
}

int main(void)
{
	int a = 0;
	minus(a);
	printf("a ist jetzt immernoch %d\n",a);
	return 0;
}
