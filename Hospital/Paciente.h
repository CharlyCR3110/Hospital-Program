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
	//metodos virtual estudiantes
	virtual void setCodigoDeCarrera(string);
	virtual void setUltNivelCursado(string);
	virtual void setEstado(string);
	virtual void setNacionalidad(string);
	virtual void setCondicion(string);
	virtual string getCondicion();
	//metodos virtual profesor
	virtual void setTitulo(string);
	virtual void setAniosLaborados(int);
	virtual void setCodigoDePlaza(string);
	virtual void setCalificacion(double);
	virtual double getCalificacion();
};

