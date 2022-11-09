#pragma once
#include "NodoCita.h"
class ListaDeCitas
{
private:
	NodoCitas* head;
public:
	ListaDeCitas(NodoCitas* = NULL);
	virtual ~ListaDeCitas();
	//getters
	NodoCitas* getHead();
	//setters
	void setHead(NodoCitas*);
	//metodos
	bool isEmpty();
	bool insertarCita(Cita*);
	string buscarYMostarCita(string);
	bool eliminarCita(string);
	//este string puede ser la cedula del paciente o el pasaporte del paciente
	string mostarCitasDeUnPaciente(string);
};

