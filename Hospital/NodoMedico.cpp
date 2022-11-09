#include "NodoMedico.h"

NodoMedico::NodoMedico(Medico* medico, NodoMedico* siguiente)
{
	this->medico = medico;
	this->siguiente = siguiente;
}

NodoMedico::~NodoMedico()
{
}

Medico* NodoMedico::getMedico()
{
	return medico;
}

NodoMedico* NodoMedico::getSiguiente()
{
	return siguiente;
}

void NodoMedico::setMedico(Medico* medico)
{
	this->medico = medico;
}

void NodoMedico::setSiguiente(NodoMedico*)
{
	this->siguiente = siguiente;
}

string NodoMedico::toString()
{
	return medico->toString();
}
