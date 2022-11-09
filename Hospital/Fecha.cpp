#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int anio)
{
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

Fecha::~Fecha()
{
}

int Fecha::getDia()
{
	return dia;
}

int Fecha::getMes()
{
	return mes;
}

int Fecha::getAnio()
{
	return anio;
}

void Fecha::setDia(int dia)
{
	this->dia = dia;
}

void Fecha::setMes(int mes)
{
	this->mes = mes;
}

void Fecha::setAnio(int anio)
{
	this->anio = anio;
}

string Fecha::toString()
{
	stringstream ss;
	ss << dia << "/" << mes << "/" << anio << endl;
	return ss.str();
}
