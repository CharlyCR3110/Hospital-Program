#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Transporte
{
protected:
	string placa;
	string marca;
	double kilometrosRecorridos;
	string tipo; //taxi o ambulancia
public:
	Transporte(string = "", string = "", double = 0, string = "");
	virtual ~Transporte();
	//getters
	string getPlaca();
	string getMarca();
	double getKilometrosRecorridos();
	string getTipo();
	//codigo de las ambulancias
	virtual string getCodigo();
	//setters
	void setPlaca(string);
	//codigo de las ambulancias
	virtual void setCodigo(string);
	void setMarca(string);
	void setKilometrosRecorridos(double);
	//metodos
	virtual string toString();
	virtual bool getOcupado();
	virtual void setOcupado(bool);
	virtual	void setNumeroDePasajeros(int);
	virtual double getCostoDelViaje();
};

