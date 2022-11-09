#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Transporte
{
protected:
	string placa;
	string marca;
	string tipoDeViaje; //ida, vuelta o ida y vuelta
	double kilometrosRecorridos;
public:
	Transporte(string = "", string = "", string = "", double = 0);
	virtual ~Transporte();
	//getters
	string getPlaca();
	string getMarca();
	string getTipoDeViaje();
	double getKilometrosRecorridos();
	//setters
	void setPlaca(string);
	void setMarca(string);
	void setTipoDeViaje(string);
	void setKilometrosRecorridos(double);
	//metodos
	virtual string toString();
};

