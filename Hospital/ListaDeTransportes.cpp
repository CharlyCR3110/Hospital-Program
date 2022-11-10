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

bool ListaDeTransportes::insertarTransporte(Transporte* transporte)
{
	if (transporte != NULL)
	{
		NodoTransporte* nuevo = new NodoTransporte(transporte);
		if (isEmpty())
		{
			head = nuevo;
		}
		else
		{
			NodoTransporte* aux = head;
			while (aux->getSiguiente() != NULL)
			{
				aux = aux->getSiguiente();
			}
			aux->setSiguiente(nuevo);
		}
		return true;
	}
	return false;
}
