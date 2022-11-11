#include "ListaDeMedicos.h"

ListaDeMedicos::ListaDeMedicos(NodoMedico* head)
{
	this->head = head;
}

ListaDeMedicos::~ListaDeMedicos()
{
	while (head != NULL)
	{
		NodoMedico* aux = head;
		head = head->getSiguiente();
		delete aux;
	}
}

NodoMedico* ListaDeMedicos::getHead()
{
	return head;
}

void ListaDeMedicos::setHead(NodoMedico* head)
{
	this->head = head;
}

bool ListaDeMedicos::isEmpty()
{
	return head == NULL;
}

bool ListaDeMedicos::insertarMedico(Medico* medico)
{
	NodoMedico* nuevo = new NodoMedico(medico);
	if (isEmpty())
	{
		head = nuevo;
		return true;
	}
	else
	{
		if (this->existeMedico(medico->getCedula())) {
			return false;
		}
		NodoMedico* aux = head;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		return true;
	}
	return false;
}

bool ListaDeMedicos::existeMedico(string cedula)
{
	NodoMedico* aux = head;
	while (aux != NULL)
	{
		if (aux->getMedico()->getCedula() == cedula)
		{
			return true;
		}
		aux = aux->getSiguiente();
	}
	return false;
}
