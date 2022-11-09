#include "ListaDeMedicos.h"

ListaDeMedicos::ListaDeMedicos(NodoMedico* head)
{
	this->head = head;
}

ListaDeMedicos::~ListaDeMedicos()
{
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
		NodoMedico* aux = head;
		// se debe de comprobar aqui en caso de que solo exista un medico registrado
		if (aux->getMedico()->getCedula() == medico->getCedula())
		{
			return false;
		}
		while (aux->getSiguiente() != NULL)
		{
			if (aux->getMedico()->getCedula() == medico->getCedula())
			{
				return false;
			}
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		return true;
	}
	return false;
}