#include "Persona.h"

Persona::Persona(string nombre, string apellido, int edad)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->edad = edad;
}

Persona::~Persona()
{
}

string Persona::getNombre()
{
	return nombre;
}

string Persona::getApellido()
{
	return apellido;
}

int Persona::getEdad()
{
	return edad;
}

void Persona::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Persona::setApellido(string apellido)
{
	this->apellido = apellido;
}

void Persona::setEdad(int edad)
{
	this->edad = edad;
}

string Persona::toString()
{
	stringstream ss;
	ss << "Nombre: " << nombre << endl
		<< "Apellido: " << apellido << endl
		<< "Edad: " << edad << endl;
	return ss.str();
}
