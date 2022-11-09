#pragma once
#include "Profesor.h"
class ConPropiedad : public Profesor
{
private:
	string codigoDePlaza;
public:
	ConPropiedad(string = "", string = "", int = 0, string = "", string = "", string = "", int = 0, string = "");
	virtual ~ConPropiedad();
	//getters
	string getCodigoDePlaza();
	//setters
	void setCodigoDePlaza(string);
	//metodos
	string toString();
};

