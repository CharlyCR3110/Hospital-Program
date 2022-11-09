#pragma once
#include "Persona.h"
class Medico : public Persona
{
private:
	string cedula;
	string numTelefonico;
	string especialidad;
public:
	Medico(string = "", string = "", int = 0, string = "", string = "", string = "");
	virtual ~Medico();
	//getters
	string getCedula();
	string getNumTelefonico();
	string getEspecialidad();
	//setters
	void setCedula(string);
	void setNumTelefonico(string);
	void setEspecialidad(string);
	//metodos
	string toString();
};

