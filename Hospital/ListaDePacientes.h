#pragma once
#include "NodoPaciente.h"
class ListaDePacientes
{
private:
	NodoPaciente* head;
public:
	ListaDePacientes(NodoPaciente* = NULL);
	virtual ~ListaDePacientes();
	//getters
	NodoPaciente* getHead();
	//setters
	void setHead(NodoPaciente*);
	//metodos
	bool isEmpty();
	bool insertarPaciente(Paciente*);
	bool eliminarPaciente(string);
	Paciente* buscarPaciente(string);
	string mostrarPacientesProfesores();
	string mostrarPacientesEstudiantes();
	string mostrarPacientes();
	string buscarYMostrarPaciente(string);
	bool existePaciente(string);
};

