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