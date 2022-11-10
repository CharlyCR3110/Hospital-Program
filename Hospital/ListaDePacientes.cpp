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