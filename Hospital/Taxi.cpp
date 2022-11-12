#include "Taxi.h"

Taxi::Taxi(string placa, string marca, string tipoDeViaje, double kilometrosRecorridos, int numeroDePasajeros)
	:Transporte(placa, marca, tipoDeViaje, kilometrosRecorridos)
{
	this->costoDelViaje = cobroTaxi::calcularCosto(kilometrosRecorridos, numeroDePasajeros);
	this->numeroDePasajeros = numeroDePasajeros;
	this->tipo = "Taxi";
}

Taxi::~Taxi()
{
}

double Taxi::getCostoDelViaje()
{
	return costoDelViaje;
}

int Taxi::getNumeroDePasajeros()
{
	return numeroDePasajeros;
}

void Taxi::setCostoDelViaje(double costoDelViaje)
{
	this->costoDelViaje = costoDelViaje;
}

void Taxi::setNumeroDePasajeros(int numeroDePasajeros)
{
	this->numeroDePasajeros = numeroDePasajeros;
}

string Taxi::toString()
{
	stringstream ss;
	ss << Transporte::toString();
	ss << "Costo del viaje: " << costoDelViaje << endl;
	ss << "Numero de pasajeros: " << numeroDePasajeros << endl;
	return ss.str();
}
