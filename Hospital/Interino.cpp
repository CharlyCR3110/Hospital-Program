#include "Interino.h"
//(nombre, apellido, edad, universidad, cedula, titulo, aniosLaborados
Interino::Interino(string nombre, string apellido, int edad, string universidad, string cedula, string titulo, int aniosLaborados, double calificacion)
	: Profesor(nombre, apellido, edad, universidad, cedula, titulo, aniosLaborados)
{
	this->calificacion = calificacion;
	this->tipo = "Interino";
}

Interino::~Interino()
{
}

double Interino::getCalificacion()
{
	return calificacion;
}

void Interino::setCalificacion(double calificacion)
{
	this->calificacion = calificacion;
}

string Interino::toString()
{
	stringstream ss;
	ss << Profesor::toString()
		<< "Calificacion: " << calificacion << endl;
	return ss.str();
}
