#pragma once
//Al crearse una cita, esta tendr� un c�digo de cita, adem�s se vincular� con alg�n paciente y
//un m�dico ya ingresados previamente en el programa, una hora(horas y minutos), una fecha(d�a,
//	mes, a�o), e informaci�n del transporte.La cita, se debe realizar con un m�dico que tenga una
//	especialidad que se supone, necesita la persona paciente universitaria
#include "Paciente.h"
#include "Medico.h"
#include "Transporte.h"
#include "Hora.h"
#include "Fecha.h"
#include <string>
class Cita
{
private:
	string codigoCita;
	Paciente* paciente;
	Medico* medico;
	Hora* hora;
	Fecha* fecha;
	Transporte* transporte;
	string tipoDeViaje;
public:
	Cita(string = "", Paciente* = nullptr, Medico* = nullptr, Hora* = nullptr, Fecha* = nullptr, Transporte* = nullptr);
	Cita(Paciente* = NULL, Medico* = NULL, Fecha* = NULL, Hora* = NULL, Transporte* = NULL, string = "");
	virtual ~Cita();
	//getters
	string getCodigoCita();
	Paciente* getPaciente();
	Medico* getMedico();
	Hora* getHora();
	Fecha* getFecha();
	Transporte* getTransporte();
	//setters
	void setCodigoCita(string);
	void setPaciente(Paciente*);
	void setMedico(Medico*);
	void setHora(Hora*);
	void setFecha(Fecha*);
	void setTransporte(Transporte*);
	//metodos
	string toString();
};


