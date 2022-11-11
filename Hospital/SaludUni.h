#pragma once
#include "ListaDeCitas.h"
#include "ListaDeMedicos.h"
#include "ListaDePacientes.h"
#include "ListaDeTransportes.h"
//clase principal encargada de todo el hospital
class SaludUni
{
private:
	string cedulaJuridica;
	string telefono;
	string direccion;
	string nombre;
	ListaDeCitas* listaDeCitas;
	ListaDeMedicos* listaDeMedicos;
	ListaDePacientes* listaDePacientes;
	ListaDeTransportes* listaDeTransportes;
public:
	SaludUni(string = "", string = "", string = "", string = "");
	virtual ~SaludUni();
	//getters
	string getCedulaJuridica();
	string getTelefono();
	string getDireccion();
	string getNombre();
	ListaDeCitas* getListaDeCitas();
	ListaDeMedicos* getListaDeMedicos();
	ListaDePacientes* getListaDePacientes();
	ListaDeTransportes* getListaDeTransportes();
	//setters
	void setCedulaJuridica(string);
	void setTelefono(string);
	void setDireccion(string);
	void setNombre(string);
	//toString
	string toString();
	//metodos
	bool insertarMedico(Medico*);
	bool insertarPaciente(Paciente*);
};

