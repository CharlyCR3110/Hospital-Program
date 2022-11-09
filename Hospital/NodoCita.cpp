#include "NodoCita.h"

NodoCitas::NodoCitas(Cita* cita, NodoCitas* siguiente)
{
	this->cita = cita;
	this->siguiente = siguiente;
}

NodoCitas::~NodoCitas()
{
}

Cita* NodoCitas::getCita()
{
	return cita;
}

NodoCitas* NodoCitas::getSiguiente()
{
	return siguiente;
}

void NodoCitas::setCita(Cita* cita)
{
	this->cita = cita;
}

void NodoCitas::setSiguiente(NodoCitas* siguiente)
{
	this->siguiente = siguiente;
}

string NodoCitas::toString()
{
	return cita->toString();
}
