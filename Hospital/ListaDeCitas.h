#pragma once
#include "NodoCita.h"
class ListaDeCitas
{
private:
	NodoCitas* head;
public:
	ListaDeCitas(NodoCitas* = NULL);
	virtual ~ListaDeCitas();
	//getters
	NodoCitas* getHead();
	//setters
	void setHead(NodoCitas*);
	//metodos
};

