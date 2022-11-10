#include "ListaDeTransportes.h"

ListaDeTransportes::ListaDeTransportes(NodoTransporte* head)
{
	this->head = head;
}

ListaDeTransportes::~ListaDeTransportes()
{
	while (head != NULL)
	{
		NodoTransporte* aux = head;
		head = head->getSiguiente();
		delete aux;
	}
}

NodoTransporte* ListaDeTransportes::getHead()
{
	return head;
}

void ListaDeTransportes::setHead(NodoTransporte* head)
{
	this->head = head;
}

bool ListaDeTransportes::isEmpty()
{
	return head == NULL;
}
