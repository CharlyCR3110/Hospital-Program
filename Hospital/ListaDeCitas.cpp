#include "ListaDeCitas.h"

ListaDeCitas::ListaDeCitas(NodoCitas* head)
{
	this->head = head;
}

ListaDeCitas::~ListaDeCitas()
{
}

NodoCitas* ListaDeCitas::getHead()
{
	return head;
}

void ListaDeCitas::setHead(NodoCitas*)
{
	this->head = head;
}

bool ListaDeCitas::isEmpty()
{
	return head == NULL;
}

bool ListaDeCitas::insertarCita(Cita* cita)
{
	NodoCitas* nuevo = new NodoCitas(cita);
	if (isEmpty())
	{
		head = nuevo;
		return true;
	}
	else
	{
		NodoCitas* aux = head;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		return true;
	}
	return false;
}

string ListaDeCitas::buscarYMostarCita(string codigo)
{
	NodoCitas* aux = head;
	while (aux != NULL)
	{
		if (aux->getCita()->getCodigoCita() == codigo)
		{
			return aux->getCita()->toString();
		}
		aux = aux->getSiguiente();
	}
	return "No fue posible encontrar la cita";
}