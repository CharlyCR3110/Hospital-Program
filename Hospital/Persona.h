#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Persona
{
protected:
	string nombre;
	string apellido;
	int edad;
public:
	Persona(string = "", string = "", int = 0);
	virtual ~Persona();
	//getters
	string getNombre();
	string getApellido();
	int getEdad();
	//setters
	void setNombre(string);
	void setApellido(string);
	void setEdad(int);
	//metodos
	virtual string toString();
};

