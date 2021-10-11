#include<stdio.h>

int main(void)
{
	int i,n;
	
	/*Man kann in der For Schleife mehrere Variablen initialisieren*/
	for(i=0, n=i+1; i<n; i++, n++)
	{
		if (i%10000==0) printf("\rZahl ist %d",i);
	}

	printf("\n%d\n",i);

	return 0;
}
