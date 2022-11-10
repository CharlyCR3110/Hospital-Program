#pragma once
#include "Paciente.h"
class NodoPaciente
{
private: 
	Paciente* paciente;
	NodoPaciente* siguiente;
public:
	NodoPaciente(Paciente* = NULL, NodoPaciente* = NULL);
	virtual ~NodoPaciente();
	//getters
	Paciente* getPaciente();
	NodoPaciente* getSiguiente();
	//setters
	void setPaciente(Paciente*);
	void setSiguiente(NodoPaciente*);
	//metodos
	string toString();
};

