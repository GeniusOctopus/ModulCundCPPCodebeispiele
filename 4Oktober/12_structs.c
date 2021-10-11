#include<stdio.h>

struct datum
{
	unsigned short tag;
	unsigned short monat;
	short jahr;
};

void outp(struct datum j)
{
	printf("Datum ist %02d.%02d.%04d\n",j.tag,j.monat,j.jahr);
}

struct datum getMyDate()
{
	struct datum dd;
	dd.tag = 21;
	dd.monat = 5;
	dd.jahr = 2001;
	
	return dd;
}

int main(void)
{
	struct datum d1;

	d1.tag = 4;
	d1.monat = 10;
	d1.jahr = 2021;

	outp(d1);

	struct datum d2 = getMyDate();
	outp(d2);

	return 0;
}
