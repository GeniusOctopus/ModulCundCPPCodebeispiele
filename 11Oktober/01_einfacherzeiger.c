#include<stdio.h>

int main(void)
{
	int i = 5;

	int *iz = &i;

	printf("i ist %d  und an Adresse %p\n",i,&i);
	printf("iz ist %p und hat den Value %d\n",iz,*iz);

	printf("Ändern von i\n");
	i = 66;
	printf("i ist %d  und an Adresse %p\n",i,&i);
	printf("iz ist %p und hat den Value %d\n",iz,*iz);
	
	printf("Ändern von iz\n");
	*iz = 77;
	printf("i ist %d  und an Adresse %p\n",i,&i);
	printf("iz ist %p und hat den Value %d\n",iz,*iz);

	return 0;
}
