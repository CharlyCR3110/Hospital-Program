#pragma once
#include "Profesor.h"
class Interino : public Profesor
{
private:
	double calificacion; //1-10
public:
	Interino(string = "", string = "", int = 0, string = "", string = "", string = "", int = 0, double = 0);
	virtual ~Interino();
	//getters
	double getCalificacion();
	//setters
	void setCalificacion(double);
	//metodos
	string toString();
};

