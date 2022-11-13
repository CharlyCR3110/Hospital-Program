#pragma once
#include "Estudiante.h"
class EstNacional : public Estudiante
{
private:
	string cedula;
	string estado; //activo, suspendido
public:
	EstNacional(string = "", string = "", int = 0, string = "", string = "", string = 0, string = "", string = "", string = "");
	virtual ~EstNacional();
	//getters
	string getCedula();
	string getEstado();
	//setters
	void setCedula(string);
	void setEstado(string);
	//metodos
	string toString();
	string getIdentificacion();
};

