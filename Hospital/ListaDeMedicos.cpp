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
