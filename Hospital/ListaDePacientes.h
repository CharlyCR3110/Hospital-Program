#pragma once
#include "NodoPaciente.h"
class ListaDePacientes
{
private:
	NodoPaciente* head;
public:
	ListaDePacientes(NodoPaciente* = NULL);
	virtual ~ListaDePacientes();
	//getters
	NodoPaciente* getHead();
	//setters
	void setHead(NodoPaciente*);
	//metodos
	bool isEmpty();
};

