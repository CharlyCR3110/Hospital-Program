#include "ListaDeTransportes.h"

ListaDeTransportes::ListaDeTransportes(NodoTransporte* head)
{
	this->head = head;
}

ListaDeTransportes::~ListaDeTransportes()
{
}

NodoTransporte* ListaDeTransportes::getHead()
{
	return head;
}

void ListaDeTransportes::setHead(NodoTransporte* head)
{
	this->head = head;
}
