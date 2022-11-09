#pragma once
#include "Paciente.h"
class Profesor : public Paciente
{
protected:
	string cedula;
	string titulo;
	int aniosLaborados;
public:
	//nombre, apellido, edad, universidad, cedula, titulo, aniosLaborados
	Profesor(string = "", string = "", int = 0, string = "", string = "", string = "", int = 0);
	virtual ~Profesor();
	//getters
	string getCedula();
	string getTitulo();
	int getAniosLaborados();
	//setters
	void setCedula(string);
	void setTitulo(string);
	void setAniosLaborados(int);
	//metodos
	virtual string toString();
};

