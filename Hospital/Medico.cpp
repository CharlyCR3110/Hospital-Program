#include "Medico.h"

Medico::Medico(string nombre, string apellido, int edad, string cedula, string especialidad, string numTelefonico) : Persona(nombre, apellido, edad)
{
	this->cedula = cedula;
	this->especialidad = especialidad;
	this->numTelefonico = numTelefonico;
}

Medico::~Medico()
{
}

string Medico::getCedula()
{
	return cedula;
}

string Medico::getNumTelefonico()
{
	return numTelefonico;
}

string Medico::getEspecialidad()
{
	return especialidad;
}

void Medico::setCedula(string cedula)
{
	this->cedula = cedula;
}

void Medico::setNumTelefonico(string numTelefonico)
{
	this->numTelefonico = numTelefonico;
}

void Medico::setEspecialidad(string especialidad)
{
	this->especialidad = especialidad;
}

string Medico::toString()
{
	stringstream ss;
	ss << Persona::toString()
		<< "Cedula: " << cedula << endl
		<< "Especialidad: " << especialidad << endl
		<< "Numero Telefonico: " << numTelefonico << endl;
	return ss.str();
}
