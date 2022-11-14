#pragma once
#include "NodoMedico.h"
class ListaDeMedicos
{
private:
	NodoMedico* head;
public:
	ListaDeMedicos(NodoMedico* = NULL);
	virtual ~ListaDeMedicos();
	//getters
	NodoMedico* getHead();
	//setters
	void setHead(NodoMedico*);
	//metodos
	bool isEmpty();
	bool insertarMedico(Medico*);
	bool existeMedico(string);
	bool eliminarMedico(string);
};

