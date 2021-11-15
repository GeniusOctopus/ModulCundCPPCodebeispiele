#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct gruppen gruppen;

struct gruppen
{
	char * gruppenname;
	int gruppengroesse;
	gruppen *next;
};

gruppen *erstesElement = NULL;

gruppen *erstelleElement(char *gn, int gg)
{
	gruppen *neuesElement = (gruppen *)malloc(sizeof(gruppen));
	neuesElement->gruppenname = (char *)malloc(sizeof(char)*(strlen(gn)+1));
	strcpy(neuesElement->gruppenname,gn);
	neuesElement->gruppengroesse = gg;
	neuesElement->next = NULL;

	return neuesElement;
}

void addElement(char *gn, int gg)
{
	/* Neues Element vom Typ struct gruppen anlegen und über die Funktion beschreiben */
	gruppen *neuesElement = erstelleElement(gn,gg);;

	if(erstesElement == NULL) erstesElement = neuesElement;
	else
	{
		/* finden des letzten Elements */
		gruppen *searchElement = erstesElement;
		while(searchElement->next != NULL) searchElement = searchElement->next;
		searchElement->next = neuesElement;
	}
}

void insertElement(char *gn, int gg)
{
	if(erstesElement == NULL) addElement(gn,gg);
	else
	{
		gruppen *neuesElement = erstelleElement(gn,gg);
	
		neuesElement->next = erstesElement;
		erstesElement = neuesElement;
	}
}

void listElements()
{
	gruppen *tempElement = erstesElement;

	while(tempElement != NULL)
	{
		printf("%s - %d\n",tempElement->gruppenname, tempElement->gruppengroesse);
		tempElement = tempElement->next;
	}
}

void tauscheElement(gruppen *element, gruppen *vorElement)
{
	gruppen *aktElement = element;
	gruppen *nextElement = element->next;

	aktElement->next = nextElement->next;
	nextElement->next = aktElement;
	
	if(vorElement != NULL) vorElement->next = nextElement;
	if(aktElement == erstesElement) erstesElement = nextElement;
}

void sortierenNachGruppengroesse()
{
	gruppen * tempElement = erstesElement;
	gruppen * vorElement = NULL;

	while(tempElement->next != NULL)
	{
		if(tempElement->gruppengroesse < tempElement->next->gruppengroesse) 
		{
			tauscheElement(tempElement, vorElement);
			tempElement = erstesElement;
			vorElement = NULL;
		}
		else 
		{
			vorElement = tempElement;
			tempElement = tempElement->next;
		}
	}
}

void cleanElements()
{
	while(erstesElement!=NULL)
	{
		gruppen *tempElement = erstesElement->next;
		free(erstesElement->gruppenname);
		free(erstesElement);
		erstesElement = tempElement;
	}
}

int main(void)
{
	addElement("Gruppe 1", 4);
	addElement("Neue Gruppe 3", 55);
	insertElement("ZGruppe", 5);
	addElement("AAA Group", 55);
	addElement("000 Group 0", 51);
	insertElement("die erste Gruppe", 0);

	listElements();
	sortierenNachGruppengroesse();
	printf("-------------------------------------------------\n");
	cleanElements();

	return 0;
}
