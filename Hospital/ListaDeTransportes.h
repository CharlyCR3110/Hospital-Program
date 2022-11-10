#pragma once
#include "NodoTransporte.h"
class ListaDeTransportes
{
private:
	NodoTransporte* head;
public:
	ListaDeTransportes(NodoTransporte* = NULL);
	~ListaDeTransportes();
	//getters
	NodoTransporte* getHead();
	//setters
	void setHead(NodoTransporte*);
	//metodos
};

