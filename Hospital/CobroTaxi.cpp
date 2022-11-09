#include "CobroTaxi.h"

cobroTaxi::cobroTaxi(Taxi* taxi)
{
	this->taxi = taxi;
}

cobroTaxi::~cobroTaxi()
{
}

Taxi* cobroTaxi::getTaxi()
{
	return taxi;
}

void cobroTaxi::setTaxi(Taxi* taxi)
{
	this->taxi = taxi;
}

double cobroTaxi::calcularCosto()
{
	double costo = 0;
	if (taxi->getKilometrosRecorridos() >= 0.5 && taxi->getKilometrosRecorridos() <= 2)
	{
		costo = taxi->getKilometrosRecorridos() * 950;
	}
	else if (taxi->getKilometrosRecorridos() > 2 && taxi->getKilometrosRecorridos() <= 5)
	{
		costo = taxi->getKilometrosRecorridos() * 700;
	}
	else if (taxi->getKilometrosRecorridos() > 5)
	{
		costo = taxi->getKilometrosRecorridos() * 600;
	}
	if (taxi->getNumeroDePasajeros() > 1)
	{
		//se suma un 10% por cada pasajero adicional
		//incluyendo al pasajero 1
		costo += costo * 0.1 * (taxi->getNumeroDePasajeros());
	}
	return costo;
}

string cobroTaxi::toString()
{
	return "Costo del viaje: " + to_string(calcularCosto());
}
