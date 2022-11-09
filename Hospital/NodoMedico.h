#pragma once
#include "Medico.h"

class NodoMedico
{
private:
	Medico* medico;
	NodoMedico* siguiente;
public:
	NodoMedico(Medico* = NULL, NodoMedico* = NULL);
	virtual ~NodoMedico();
	//getters
	Medico* getMedico();
	NodoMedico* getSiguiente();
	//setters
	void setMedico(Medico*);
	void setSiguiente(NodoMedico*);
	//metodos
	string toString();
};

