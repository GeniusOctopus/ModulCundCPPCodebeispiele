#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void mymallocstrcopy(char ** dst, char * src)
{
	*dst = (char *)malloc(sizeof(char) * (strlen(src)+1));
	strcpy(*dst,src);
}

int main(void)
{
	char *s = NULL;

	mymallocstrcopy(&s, "Mustermann");

	printf("Unser s ist jetzt: %s\n",s);

	free(s);

	return 0;
}
