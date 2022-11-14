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
}

void Paciente::setCodigoDeCarrera(string codigoCarrera)
{	
}

void Paciente::setUltNivelCursado(string)
{
}

void Paciente::setEstado(string)
{
}

void Paciente::setNacionalidad(string)
{
}

void Paciente::setCondicion(string)
{
}

void Paciente::setTitulo(string)
{
}

void Paciente::setAniosLaborados(int)
{
}

void Paciente::setCodigoDePlaza(string)
{
}

void Paciente::setCalificacion(double)
{
}
