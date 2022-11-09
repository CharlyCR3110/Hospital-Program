#pragma once
#include "Taxi.h"

//clase cobro para calcular el monto a pagar por el taxi
// en base a los kilometros recorridos y el numero de pasajeros
//Si la carrera está en un rangode500mts a 2 kms exactos, eltaxi cobra 950.00 el kilómetro.
//- Si la carrera va de 2 kms para arriba hasta los 5 kilómetros, el costo por kilómetro es de
//700.00 y si la carrera va de más de 5 kilómetros en adelante, el costo por kilómetro es de
//600.00.
//- Si van más de una persona, se cobrará un 10 porciento adicional por cada persona extra.
//Nota: la tarifa mínima en taxi es de 950
class cobroTaxi {
private:
	Taxi* taxi;
public:
	cobroTaxi(Taxi* = NULL);
	virtual ~cobroTaxi();
	//getters
	Taxi* getTaxi();
	//setters
	void setTaxi(Taxi*);
	//metodos
	double calcularCosto();
	string toString()
};

