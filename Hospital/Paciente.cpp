#include "Paciente.h"

Paciente::Paciente(string nombre, string apellido, int edad, string universidad, string tipo) : Persona(nombre, apellido, edad)
{
	this->universidad = universidad;
	this->tipo = tipo;
}

Paciente::~Paciente()
{
}

string Paciente::getUniversidad()
{
	return universidad;
}

string Paciente::getTipo()
{
	return tipo;
}

void Paciente::setUniversidad(string universidad)
{
	this->universidad = universidad;
}

string Paciente::toString()
{
	stringstream ss;
	ss << Persona::toString()
		<< "Universidad: " << universidad << endl;
	return ss.str();
}

void Paciente::setNumeroDeTelefono(string numeroDeTelefono)
{
	cout << "Metodo para que no sea virtual puro" << endl;
}