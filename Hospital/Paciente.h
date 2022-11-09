#pragma once
#include "Persona.h"
class Paciente : public Persona
{
protected:
	string universidad; //Universidad de procedencia
public:
	Paciente(string = "", string = "", int = 0, string = "");
	virtual ~Paciente();
	//getters
	string getUniversidad();
	//setters
	void setUniversidad(string);
	//metodos
	virtual string toString();
	virtual string getIdentificacion() = 0;
};

