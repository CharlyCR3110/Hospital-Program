#include "Transporte.h"

Transporte::Transporte(string placa, string marca, double kilometrosRecorridos, string tipo)
{
	this->placa = placa;
	this->marca = marca;
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

double Transporte::getKilometrosRecorridos()
{
	return kilometrosRecorridos;
}

string Transporte::getTipo()
{
	return tipo;
}

//codigo de las ambulancias
string Transporte::getCodigo()
{
	return "";
}

void Transporte::setPlaca(string placa)
{
	this->placa = placa;
}

void Transporte::setCodigo(string)
{
}

void Transporte::setMarca(string marca)
{
	this->marca = marca;
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
	ss << "Kilometros recorridos: " << kilometrosRecorridos << endl;
	return ss.str();
}