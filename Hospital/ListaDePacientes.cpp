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
		NodoPaciente* aux = head;
		// se debe de comprobar aqui en caso de que solo exista un paciente registrado
		if (aux->getPaciente()->getIdentificacion() == paciente->getIdentificacion())
		{
			return false;
		}
		while (aux->getSiguiente() != NULL)
		{
			if (aux->getPaciente()->getIdentificacion() == paciente->getIdentificacion())
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
