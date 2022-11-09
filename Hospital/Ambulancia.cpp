#include "Ambulancia.h"

Ambulancia::Ambulancia(string placa, string marca, string tipoDeViaje, double kilometrosRecorridos, string codigo, bool ocupado)
	:Transporte(placa, marca, tipoDeViaje, kilometrosRecorridos)
{
	this->codigo = codigo;
	this->ocupado = ocupado;
}

Ambulancia::~Ambulancia()
{
}

string Ambulancia::getCodigo()
{
	return codigo;
}

bool Ambulancia::getOcupado()
{
	return ocupado;
}

void Ambulancia::setCodigo(string codigo)
{
	this->codigo = codigo;
}

void Ambulancia::setOcupado(bool ocupado)
{
	this->ocupado = ocupado;
}

string Ambulancia::toString()
{
	stringstream ss;
	ss << Transporte::toString();
	ss << "Codigo: " << codigo << endl;
	ss << "Ocupado: " << ocupado << endl;
	return ss.str();
}
