#include "EstNacional.h"

//nombre, apellido, edad, universidad
EstNacional::EstNacional(string nombre, string apellido, int edad, string universidad, 
	string codigoDeCarrera, int ultNivelCursado, string numeroDeTelefono, string cedula, string estado)
	: Estudiante(nombre, apellido, edad, universidad, codigoDeCarrera, ultNivelCursado, numeroDeTelefono)
{
	this->cedula = cedula;
	this->estado = estado;
	this->tipo = "Nacional";
}

EstNacional::~EstNacional()
{
}

string EstNacional::getCedula()
{
	return cedula;
}

string EstNacional::getEstado()
{
	return estado;
}

void EstNacional::setCedula(string cedula)
{
	this->cedula = cedula;
}

void EstNacional::setEstado(string estado)
{
	this->estado = estado;
}

string EstNacional::toString()
{
	stringstream ss;
	ss << Estudiante::toString()
		<< "Cedula: " << cedula << endl
		<< "Estado: " << estado << endl;
	return ss.str();
}

string EstNacional::getIdentificacion()
{
	return this->getCedula();
}