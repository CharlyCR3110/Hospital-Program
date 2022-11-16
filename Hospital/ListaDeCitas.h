#pragma once
#include "NodoCita.h"
class ListaDeCitas
{
private:
	NodoCitas* head;
public:
	ListaDeCitas(NodoCitas* = NULL);
	virtual ~ListaDeCitas();
	//getters
	NodoCitas* getHead();
	//setters
	void setHead(NodoCitas*);
	//metodos
	bool isEmpty();
	bool insertarCita(Cita*);
	Cita* buscarCita(string);
	string MostarCitaEspecifica(string);
	bool eliminarCita(string);
	
	//este string puede ser la cedula del paciente o el pasaporte del paciente
	string mostarCitasDeUnPaciente(string);
	bool existeCita(string);
	//
	bool existeOtraCitaAlMismoTiempo(Fecha*, Hora*);
	bool elPacienteYaTieneOtraCitaAlMismoTiempo(Paciente*, Fecha*, Hora*);
	bool elMedicoYaTieneOtraCitaAlMismoTiempo(Medico*, Fecha*, Hora*);
	string mostrarCitas();
};