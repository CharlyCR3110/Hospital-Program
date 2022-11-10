#pragma once
#include "Transporte.h"
class NodoTransporte
{
private:
	Transporte* transporte;
	NodoTransporte* siguiente;
public: 
	NodoTransporte(Transporte* = NULL, NodoTransporte* = NULL);
	~NodoTransporte();
	//getters
	Transporte* getTransporte();
	NodoTransporte* getSiguiente();
	//setters
	void setTransporte(Transporte*);
	void setSiguiente(NodoTransporte*);
	//metodos
	string toString();
};

