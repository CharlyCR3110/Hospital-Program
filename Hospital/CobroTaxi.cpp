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

double cobroTaxi::calcularCosto(double kilometrosRecorridos, int numeroDePasajeros)
{
	double costo = 0;
	if (kilometrosRecorridos >= 0.5 && kilometrosRecorridos <= 2)
	{
		costo = kilometrosRecorridos * 950;
	}
	else if (kilometrosRecorridos > 2 && kilometrosRecorridos <= 5)
	{
		costo = kilometrosRecorridos * 700;
	}
	else if (kilometrosRecorridos > 5)
	{
		costo = kilometrosRecorridos * 600;
	}
	if (numeroDePasajeros > 1)
	{
		//se suma un 10% por cada pasajero adicional
		//incluyendo al pasajero 1
		costo += costo * 0.1 * (numeroDePasajeros);
	}
	return costo;
}

string cobroTaxi::toString()
{
	return "Costo del viaje: " + to_string(calcularCosto());
}
