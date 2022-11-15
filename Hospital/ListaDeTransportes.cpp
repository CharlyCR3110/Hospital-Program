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
			// se debe de comprobar aqui en caso de que solo exista un transporte registrado
			if (aux->getTransporte()->getPlaca() == transporte->getPlaca())
			{
				return false;
			}
			while (aux->getSiguiente() != NULL)
			{
				//comprobar que no exista otro transporte con esa placa
				if (aux->getTransporte()->getPlaca() == transporte->getPlaca())
				{
					return false;
				}
				aux = aux->getSiguiente();
			}
			aux->setSiguiente(nuevo);
		}
		return true;
	}
	return false;
}

bool ListaDeTransportes::eliminarTransporte(string placa)
{
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		// si el primer elemento es el que se desea eliminar
		if (aux->getTransporte()->getPlaca() == placa)
		{
			head = head->getSiguiente();
			delete aux;
			return true;
		}
		while (aux->getSiguiente() != NULL)
		{
			if (aux->getSiguiente()->getTransporte()->getPlaca() == placa)
			{
				NodoTransporte* aux2 = aux->getSiguiente();
				aux->setSiguiente(aux->getSiguiente()->getSiguiente());
				delete aux2;
				return true;
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}

bool ListaDeTransportes::existeTransporte(string placa)
{
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		while (aux != NULL)
		{
			if (aux->getTransporte()->getPlaca() == placa)
			{
				return true;
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}

bool ListaDeTransportes::existeAmbulancia(string codigo)
{
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		while (aux != NULL)
		{
			if (aux->getTransporte()->getCodigo() == codigo)
			{
				return true;
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}
