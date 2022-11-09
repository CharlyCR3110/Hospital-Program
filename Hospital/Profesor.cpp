#include "Profesor.h"

Profesor::Profesor(string nombre, string apellido, int edad, string universidad, string cedula, string titulo, int aniosLaborados)
	: Paciente(nombre, apellido, edad, universidad)
{
	this->cedula = cedula;
	this->titulo = titulo;
	this->aniosLaborados = aniosLaborados;
}

Profesor::~Profesor()
{
}

string Profesor::getCedula()
{
	return cedula;
}

string Profesor::getTitulo()
{
	return titulo;
}

int Profesor::getAniosLaborados()
{
	return aniosLaborados;
}

void Profesor::setCedula(string cedula)
{
	this->cedula = cedula;
}

void Profesor::setTitulo(string titulo)
{
	this->titulo = titulo;
}

void Profesor::setAniosLaborados(int aniosLaborados)
{
	this->aniosLaborados = aniosLaborados;
}

string Profesor::toString()
{
	stringstream ss;
	ss << Paciente::toString()
		<< "Cedula: " << cedula << endl
		<< "Titulo: " << titulo << endl
		<< "Anios Laborados: " << aniosLaborados << endl;
	return ss.str();
}
