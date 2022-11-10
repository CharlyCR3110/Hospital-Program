#include "NodoPaciente.h"

NodoPaciente::NodoPaciente(Paciente* paciente, NodoPaciente* siguiente)
{
	this->paciente = paciente;
	this->siguiente = siguiente;
}

NodoPaciente::~NodoPaciente()
{
}

Paciente* NodoPaciente::getPaciente()
{
	return paciente;
}

NodoPaciente* NodoPaciente::getSiguiente()
{
	return siguiente;
}

void NodoPaciente::setPaciente(Paciente* paciente)
{
	this->paciente = paciente;
}

void NodoPaciente::setSiguiente(NodoPaciente* siguiente)
{
	this->siguiente = siguiente;
}

string NodoPaciente::toString()
{
	return paciente->toString();
}
