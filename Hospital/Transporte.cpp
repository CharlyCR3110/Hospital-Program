#include "Transporte.h"

Transporte::Transporte(string placa, string marca, string tipoDeViaje, double kilometrosRecorridos, string tipo)
{
	this->placa = placa;
	this->marca = marca;
	this->tipoDeViaje = tipoDeViaje;
	this->kilometrosRecorridos = kilometrosRecorridos;
	this->tipo = tipo;
}

Transporte::~Transporte()
{
}

string Transporte::getPlaca()
{
	return placa;
}

string Transporte::getMarca()
{
	return marca;
}

string Transporte::getTipoDeViaje()
{
	return tipoDeViaje;
}

double Transporte::getKilometrosRecorridos()
{
	return kilometrosRecorridos;
}

string Transporte::getTipo()
{
	return tipo;
}

void Transporte::setPlaca(string placa)
{
	this->placa = placa;
}

void Transporte::setMarca(string marca)
{
	this->marca = marca;
}

void Transporte::setTipoDeViaje(string tipoDeViaje)
{
	this->tipoDeViaje = tipoDeViaje;
}

void Transporte::setKilometrosRecorridos(double kilometrosRecorridos)
{
	this->kilometrosRecorridos = kilometrosRecorridos;
}

string Transporte::toString()
{
	stringstream ss;
	ss << "Placa: " << placa << endl;
	ss << "Marca: " << marca << endl;
	ss << "Tipo de viaje: " << tipoDeViaje << endl;
	ss << "Kilometros recorridos: " << kilometrosRecorridos << endl;
	return ss.str();
}
