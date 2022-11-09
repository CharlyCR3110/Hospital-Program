#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Fecha
{
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha(int = 0, int = 0, int = 0);
	virtual ~Fecha();
	//getters
	int getDia();
	int getMes();
	int getAnio();
	//setters
	void setDia(int);
	void setMes(int);
	void setAnio(int);
	//metodos
	string toString();
};

