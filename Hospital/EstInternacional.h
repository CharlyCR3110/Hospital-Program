#pragma once
#include "Estudiante.h"
class EstInternacional : public Estudiante
{
private:
	string nacionalidad;
	string pasaporte;
	string condicion; //refugiado, exiliado, estudiante, turista, etc.
public:
	//nombre, apellido, edad, universidad, codigoDeCarrera, ultNivelCursado, numeroDeTelefono, nacionalidad, pasaporte, condicion
	EstInternacional(string = "", string = "", int = 0, string = "", string = "", string = "", string = "", string = "", string = "", string = "");
	virtual ~EstInternacional();
	//getters
	string getNacionalidad();
	string getPasaporte();
	string getCondicion();
	//setters
	void setNacionalidad(string);
	void setPasaporte(string);
	void setCondicion(string);
	//metodos
	string toString();
	string getIdentificacion();
};