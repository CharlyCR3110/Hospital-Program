#include "ListaDePacientes.h"

ListaDePacientes::ListaDePacientes(NodoPaciente* head)
{
	this->head = head;
}

ListaDePacientes::~ListaDePacientes()
{
	//delete all the nodes
	NodoPaciente* aux = head;
	while (aux != NULL)
	{
		head = head->getSiguiente();
		delete aux;
		aux = head;
	}
}

NodoPaciente* ListaDePacientes::getHead()
{
	return head;
}

void ListaDePacientes::setHead(NodoPaciente* head)
{
	this->head = head;
}

bool ListaDePacientes::isEmpty()
{
	return head == NULL;
}

bool ListaDePacientes::insertarPaciente(Paciente* paciente)
{
	NodoPaciente* nuevo = new NodoPaciente(paciente);
	if (isEmpty())
	{
		head = nuevo;
		return true;
	}
	else
	{
		if (this->existePaciente(paciente->getIdentificacion())) {
			return false;
		}
		NodoPaciente* aux = head;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		return true;
	}
	return false;
}

bool ListaDePacientes::eliminarPaciente(string identificaion)
{
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		NodoPaciente* anterior = NULL;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getIdentificacion() == identificaion)
			{
				if (anterior == NULL)
				{
					head = head->getSiguiente();
					delete aux;
					return true;
				}
				else
				{
					anterior->setSiguiente(aux->getSiguiente());
					delete aux;
					return true;
				}
			}
			anterior = aux;
			aux = aux->getSiguiente();
		}
	}
	return false;
}

Paciente* ListaDePacientes::buscarPaciente(string identificacion)
{
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getIdentificacion() == identificacion)
			{
				return aux->getPaciente();
			}
			aux = aux->getSiguiente();
		}
	}
	return NULL;
}

string ListaDePacientes::buscarYMostrarPaciente(string identificacion)
{
	NodoPaciente* aux = head;
	while (aux != NULL)
	{
		if (aux->getPaciente()->getIdentificacion() == identificacion)
		{
			return aux->toString();
		}
		aux = aux->getSiguiente();
	}
	return "No se encontro el paciente";
}

bool ListaDePacientes::existePaciente(string identificacion)
{
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getIdentificacion() == identificacion)
			{
				return true;
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}
