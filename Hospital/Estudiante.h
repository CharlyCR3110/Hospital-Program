#pragma once
#include "Paciente.h"
class Estudiante : public Paciente
{
protected:
	string codigoDeCarrera;
	int ultNivelCursado;
	string numeroDeTelefono;
public:
	//Estudiante::Estudiante(string nombre, string apellido, int edad, string universidad)
	Estudiante(string = "", string = "", int = 0, string = "", string = "", int = 0, string = "");
	virtual ~Estudiante();
	//getters
	string getCodigoDeCarrera();
	int getUltNivelCursado();
	string getNumeroDeTelefono();
	//setters
	void setCodigoDeCarrera(string);
	void setUltNivelCursado(int);
	void setNumeroDeTelefono(string);
	//metodos
	virtual string toString();
};

