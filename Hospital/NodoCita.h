#pragma once
#include "Cita.h"
class NodoCitas
{
private:
	Cita* cita;
	NodoCitas* siguiente;
public:
	NodoCitas(Cita* = nullptr, NodoCitas* = nullptr);
	virtual ~NodoCitas();
	//getters
	Cita* getCita();
	NodoCitas* getSiguiente();
	//setters
	void setCita(Cita*);
	void setSiguiente(NodoCitas*);
	//metodos
	string toString();
};

