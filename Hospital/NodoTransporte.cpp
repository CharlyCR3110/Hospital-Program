#include "NodoTransporte.h"

NodoTransporte::NodoTransporte(Transporte* transporte, NodoTransporte* siguiente)
{
	this->transporte = transporte;
	this->siguiente = siguiente;
}

NodoTransporte::~NodoTransporte()
{
}

Transporte* NodoTransporte::getTransporte()
{
	return transporte;
}

NodoTransporte* NodoTransporte::getSiguiente()
{
	return siguiente;
}

void NodoTransporte::setTransporte(Transporte* transporte)
{
	this->transporte = transporte;
}

void NodoTransporte::setSiguiente(NodoTransporte* siguiente)
{
	this->siguiente = siguiente;
}

string NodoTransporte::toString()
{
	return transporte->toString();
}
