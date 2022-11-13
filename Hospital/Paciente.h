#pragma once
#include "Persona.h"
class Paciente : public Persona
{
protected:
	string universidad; //Universidad de procedencia
	string tipo; //Profesor o estudiante
public:
	Paciente(string = "", string = "", int = 0, string = "", string = "");
	virtual ~Paciente();
	//getters
	string getUniversidad();
	string getTipo();
	//setters
	void setUniversidad(string);
	//metodos
	//metodos virtuales (o sea que se sobreescriben o son definidos en las subclases)
	virtual string toString();
	virtual string getIdentificacion() = 0;
	virtual void setNumeroDeTelefono(string);
	virtual void setCodigoCarrera(string);
};

