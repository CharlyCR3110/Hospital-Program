#pragma once
#include "Paciente.h"
class Estudiante : public Paciente
{
protected:
	string codigoDeCarrera;
	string ultNivelCursado;
	string numeroDeTelefono;
public:
	//Estudiante::Estudiante(string nombre, string apellido, int edad, string universidad)
	Estudiante(string = "", string = "", int = 0, string = "", string = "", string = "", string = "");
	virtual ~Estudiante();
	//getters
	string getCodigoDeCarrera();
	string getUltNivelCursado();
	string getNumeroDeTelefono();
	//setters
	void setCodigoDeCarrera(string);
	void setUltNivelCursado(string);
	void setNumeroDeTelefono(string);
	//metodos
	virtual string toString();
	virtual string getIdentificacion() = 0;
};