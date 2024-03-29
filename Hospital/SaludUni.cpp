#include "SaludUni.h"

SaludUni::SaludUni(string cedulaJuridica, string telefono, string direccion, string nombre)
{
	this->cedulaJuridica = cedulaJuridica;
	this->telefono = telefono;
	this->direccion = direccion;
	this->nombre = nombre;
	this->listaDeCitas = new ListaDeCitas();
	this->listaDeMedicos = new ListaDeMedicos();
	this->listaDePacientes = new ListaDePacientes();
	this->listaDeTransportes = new ListaDeTransportes();
}

SaludUni::~SaludUni()
{
}

string SaludUni::getCedulaJuridica()
{
	return cedulaJuridica;
}

string SaludUni::getTelefono()
{
	return telefono;
}

string SaludUni::getDireccion()
{
	return direccion;
}

string SaludUni::getNombre()
{
	return nombre;
}

ListaDeCitas* SaludUni::getListaDeCitas()
{
	return listaDeCitas;
}

ListaDeMedicos* SaludUni::getListaDeMedicos()
{
	return listaDeMedicos;
}

ListaDePacientes* SaludUni::getListaDePacientes()
{
	return listaDePacientes;
}

ListaDeTransportes* SaludUni::getListaDeTransportes()
{
	return listaDeTransportes;
}

void SaludUni::setCedulaJuridica(string cedulaJuridica)
{
	this->cedulaJuridica = cedulaJuridica;
}

void SaludUni::setTelefono(string telefono)
{
	this->telefono = telefono;
}

void SaludUni::setDireccion(string direccion)
{
	this->direccion = direccion;
}

void SaludUni::setNombre(string nombre)
{
	this->nombre = nombre;
}

string SaludUni::toString()
{
	stringstream ss;
	ss << "Cedula Juridica: " << cedulaJuridica << endl
		<< "Telefono: " << telefono << endl
		<< "Direccion: " << direccion << endl
		<< "Nombre: " << nombre << endl;
	return ss.str();
}

bool SaludUni::insertarMedico(Medico* medico)
{
	return listaDeMedicos->insertarMedico(medico);
}

bool SaludUni::insertarPaciente(Paciente* paciente)
{
	return listaDePacientes->insertarPaciente(paciente);
}

bool SaludUni::insertarTransporte(Transporte* transporte)
{
	return listaDeTransportes->insertarTransporte(transporte);
}

bool SaludUni::insertarCita(Cita* cita)
{
	return listaDeCitas->insertarCita(cita);
}

string SaludUni::mostrarCita(string codigoCita)
{
	return listaDeCitas->MostarCitaEspecifica(codigoCita);
}

string SaludUni::mostrarCostoTotalPorTaxis()
{
	return listaDeTransportes->calcularCostoTotalPorTaxis();
}
