#pragma once
#include "Transporte.h"
class Ambulancia :
    public Transporte
{
private:
	string codigo; //codigo para identificar las diferentes ambulancias
	bool ocupado;
public:
	Ambulancia(string = "", string = "", string = "", double = 0, string = "", bool = false);
	virtual ~Ambulancia();
	//getters
	string getCodigo();
	bool getOcupado();
	//setters
	void setCodigo(string);
	void setOcupado(bool);
	//metodos
	string toString();
};

