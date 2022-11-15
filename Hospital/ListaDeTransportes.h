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
	bool isEmpty();
	bool insertarTransporte(Transporte*);
	bool eliminarTransporte(string);
	bool existeTransporte(string);
	bool existeAmbulancia(string);
	Transporte* getTransporte(string);
	Transporte* getAmbulancia(string);
	string mostrarTaxis();
	string mostrarAmbulancias();
};

