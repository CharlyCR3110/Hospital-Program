#include "Taxi.h"

Taxi::Taxi(string placa, string marca, double kilometrosRecorridos, int numeroDePasajeros)
	:Transporte(placa, marca, kilometrosRecorridos)
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
	
	return cobroTaxi::calcularCosto(this->getKilometrosRecorridos(), this->getNumeroDePasajeros());

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
	ss << "Costo del viaje: " << getCostoDelViaje() << endl;
	ss << "Numero de pasajeros: " << numeroDePasajeros << endl;
	return ss.str();
}
