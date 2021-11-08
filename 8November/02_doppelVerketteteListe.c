#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct group group_t;

struct group
{
	char *name;
	int size;
	group_t *prev;
	group_t *next;
}*list=NULL; /* gleich mit als Variable list festlegen im statischen Bereich */
/*
group_t *list = NULL;
*/

group_t *getLastElement()
{
	if(list==NULL) return NULL;
	group_t *te = list;
	while(te->next != NULL) te=te->next;
	return te;
}

group_t *getFirstElement()
{
	if(list==NULL) return NULL;
	group_t *te = list;
	while(te->prev != NULL) te=te->prev;
	return te;
}

group_t *createElement(char *n, int s)
{
	group_t *te = (group_t*)malloc(sizeof(group_t));
	te->name = (char*)malloc(sizeof(char)*(strlen(n)+1));
	strcpy(te->name,n);
	te->size = s;
	te->next = NULL;
	te->prev = NULL;
}

group_t *addElement(char * n, int s)
{
	group_t *ne = createElement(n,s);
	if (list==NULL) list = ne; /* erstes Element in der Liste */
	else
	{
		/* Zum letzten Element springen */
		group_t *te = getLastElement();
		te->next = ne;
		ne->prev = te;
	}
	return ne;
}

group_t *insertElement(char *n, int s)
{
	if (list == NULL) return addElement(n,s);
	else
	{
		group_t *ne = createElement(n,s);
		/* zum ersten Element springen */
		group_t *te = getFirstElement();
		te->prev = ne;
		ne->next = te;
		return te->prev;
	}
}

void swapElementWithNext(group_t *element)
{
	group_t *prevEl = element->prev;
	group_t *nextEl = element->next;

	if(prevEl == NULL)
	{
		nextEl->prev = NULL;
		nextEl->next->prev = element;
		element->next = nextEl->next;
	}
	else if (nextEl->next == NULL)
	{
		prevEl->next = nextEl;
		nextEl->prev = prevEl;
		element->next = NULL;
	}
	else
	{
		prevEl->next = nextEl;
		nextEl->prev = prevEl;
		nextEl->next->prev = element;
		element->next = nextEl->next;
	}
	/* Muss in allen drei Fällen ausgeführt werden */
	nextEl->next = element;
	element->prev = nextEl;
}

void sortElements()
{
	group_t *el = getFirstElement();

	while(el->next != NULL)
	{
		if(el->size > el->next->size)
		{
			swapElementWithNext(el);
			el = getFirstElement();
		}
		else
		{
			el = el->next;
		}
	}
}

void listElements()
{
	/* hole erstes element */
	group_t *te = getFirstElement();

	/* Liste durchlaufen bis zum Ende */
	for(;te!=NULL;te=te->next) printf("%20s,%d\n",te->name,te->size);
}

void clearElements()
{
	/* setzen von list auf erstes Element */
	while(list->prev != NULL) list = list->prev;

	/* Elemente löschen */
	while(list != NULL)
	{
		group_t *ne = list->next;
		free(list->name);
		free(list);
		list = ne;
	}
}

int main(void)
{
	addElement("Gruppe C",4);
	addElement("Gruppe G",3);
	addElement("Gruppe H",44);
	insertElement("Gruppe Z",5);
	addElement("Gruppe A", 40);
	insertElement("Gruppe V",3);

	listElements();

	sortElements();

	printf("----------------------------------\n");

	listElements();
	
	clearElements();

	return 0;
}
