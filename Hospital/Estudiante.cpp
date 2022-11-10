#include "Estudiante.h"

Estudiante::Estudiante(string nombre, string apellido, int edad, string universidad, string codigoDeCarrera, int ultNivelCursado, string numeroDeTelefono)
	: Paciente(nombre, apellido, edad, universidad)
{
	this->codigoDeCarrera = codigoDeCarrera;
	this->ultNivelCursado = ultNivelCursado;
	this->numeroDeTelefono = numeroDeTelefono;
	this->tipo = "Estudiante";
}

Estudiante::~Estudiante()
{
}

string Estudiante::getCodigoDeCarrera()
{
	return codigoDeCarrera;
}

int Estudiante::getUltNivelCursado()
{
	return ultNivelCursado;
}

string Estudiante::getNumeroDeTelefono()
{
	return numeroDeTelefono;
}

void Estudiante::setCodigoDeCarrera(string codigoDeCarrera)
{
	this->codigoDeCarrera = codigoDeCarrera;
}

void Estudiante::setUltNivelCursado(int ultNivelCursado)
{
	this->ultNivelCursado = ultNivelCursado;
}

void Estudiante::setNumeroDeTelefono(string numeroDeTelefono)
{
	this->numeroDeTelefono = numeroDeTelefono;
}

string Estudiante::toString()
{
	stringstream ss;
	ss << Paciente::toString()
		<< "Codigo de carrera: " << codigoDeCarrera << endl
		<< "Ultimo nivel cursado: " << ultNivelCursado << endl
		<< "Numero de telefono: " << numeroDeTelefono << endl;
	return ss.str();
}
