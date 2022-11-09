#pragma once
#include "Transporte.h"
class Taxi :
	public Transporte
{
private:
	double costoDelViaje;
	int numeroDePasajeros;
public:
	Taxi(string = "", string = "", string = "", double = 0, double = 0, int = 0);
	virtual ~Taxi();
	//getters
	double getCostoDelViaje();
	int getNumeroDePasajeros();
	//setters
	void setCostoDelViaje(double);
	void setNumeroDePasajeros(int);
	//metodos
	string toString();
};

