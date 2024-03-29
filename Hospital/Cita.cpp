#include "Cita.h"

Cita::Cita(string codigo, Paciente* paciente, Medico* medico, Hora* hora, Fecha* fecha, Transporte* transporte)
{
	this->codigoCita = codigo;
	this->paciente = paciente;
	this->medico = medico;
	this->hora = hora;
	this->fecha = fecha;
	//to-do: comprobar que el paciente no tenga transporte propio
	this->transporte = transporte;
}
//constructor en caso de que el paciente requiera ambulancia
Cita::Cita(Paciente* paciente, Medico* medico, Fecha* fecha, Hora* hora, Transporte* transporte, string tipoDeViaje)
{
	//el codigo de la cita se genera automaticamente
	this->codigoCita = "C" + to_string(fecha->getDia()) + to_string(fecha->getMes()) + to_string(fecha->getAnio()) + to_string(hora->getHora()) + to_string(hora->getMinutos());
	this->paciente = paciente;
	this->medico = medico;
	this->hora = hora;
	this->fecha = fecha;
	this->transporte = transporte;
	this->tipoDeViaje = tipoDeViaje;
}

Cita::~Cita()
{
}

string Cita::getCodigoCita()
{
	return codigoCita;
}

Paciente* Cita::getPaciente()
{
	return paciente;
}

Medico* Cita::getMedico()
{
	return medico;
}

Hora* Cita::getHora()
{
	return hora;
}

Fecha* Cita::getFecha()
{
	return fecha;
}

Transporte* Cita::getTransporte()
{
	return transporte;
}

void Cita::setCodigoCita(string codigo)
{
	this->codigoCita = codigo;
}

void Cita::setPaciente(Paciente* paciente)
{
	this->paciente = paciente;
}

void Cita::setMedico(Medico* medico)
{
	this->medico = medico;
}

void Cita::setHora(Hora* hora)
{
	this->hora = hora;
}

void Cita::setFecha(Fecha* fecha)
{
	this->fecha = fecha;
}

void Cita::setTransporte(Transporte* transporte)
{
	this->transporte = transporte;
}

string Cita::toString()
{
	stringstream ss;
	ss << "-------------------CITA-------------------" << endl;
	ss << "Codigo de cita: " << codigoCita << endl;
	ss << "-------------------PACIENTE-------------------" << endl;
	ss << paciente->toString() << endl;
	ss << "-------------------MEDICO-------------------" << endl;
	ss << medico->toString() << endl;
	ss << "-------------------FECHA-------------------" << endl;
	ss << "Hora: " << hora->toString() << endl;
	ss << "Fecha: " << fecha->toString() << endl;
	ss << "-------------------TRANSPORTE-------------------" << endl;
	if (transporte != NULL)
	{
		ss << transporte->toString() << endl;
	}
	else
	{
		ss << "No se requiere transporte" << endl;
	}
	return ss.str();
}
