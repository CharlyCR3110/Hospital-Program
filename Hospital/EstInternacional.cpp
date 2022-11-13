#include "EstInternacional.h"

//nombre, apellido, edad, universidad, codigoDeCarrera, ultNivelCursado, numeroDeTelefono, nacionalidad, pasaporte, condicion
EstInternacional::EstInternacional(string nombre, string apellido, int edad, string universidad,
	string codigoDeCarrera, int ultNivelCursado, string numeroDeTelefono, string nacionalidad,
	string pasaporte, string condicion)
	: Estudiante(nombre, apellido, edad, universidad, codigoDeCarrera, ultNivelCursado, numeroDeTelefono) 
{
	this->nacionalidad = nacionalidad;
	this->pasaporte = pasaporte;
	this->condicion = condicion;
	this->tipo = "Internacional";
}

EstInternacional::~EstInternacional()
{
}

string EstInternacional::getNacionalidad()
{
	return nacionalidad;
}

string EstInternacional::getPasaporte()
{
	return pasaporte;
}

string EstInternacional::getCondicion()
{
	return condicion;
}

void EstInternacional::setNacionalidad(string nacionalidad)
{
	this->nacionalidad = nacionalidad;
}

void EstInternacional::setPasaporte(string pasaporte)
{
	this->pasaporte = pasaporte;
}

void EstInternacional::setCondicion(string condicion)
{
	this->condicion = condicion;
}

string EstInternacional::toString()
{
	stringstream ss;
	ss << Estudiante::toString()
		<< "Nacionalidad: " << nacionalidad << endl
		<< "Pasaporte: " << pasaporte << endl
		<< "Condicion: " << condicion << endl;
	return ss.str();
}

string EstInternacional::getIdentificacion()
{
	return this->getPasaporte();
}
