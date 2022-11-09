#include "ConPropiedad.h"

ConPropiedad::ConPropiedad(string nombre, string apellido, int edad, string universidad, string cedula, string titulo, int aniosLaborados, string codigoDePlaza)
	: Profesor(nombre, apellido, edad, universidad, cedula, titulo, aniosLaborados)
{
	this->codigoDePlaza = codigoDePlaza;
}

ConPropiedad::~ConPropiedad()
{
}

string ConPropiedad::getCodigoDePlaza()
{
	return codigoDePlaza;
}

void ConPropiedad::setCodigoDePlaza(string codigoDePlaza)
{
	this->codigoDePlaza = codigoDePlaza;
}

string ConPropiedad::toString()
{
	stringstream ss;
	ss << Profesor::toString()
		<< "Codigo de Plaza: " << codigoDePlaza << endl;
	return ss.str();
}