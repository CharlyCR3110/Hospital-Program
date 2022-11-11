#include "ListaDePacientes.h"

ListaDePacientes::ListaDePacientes(NodoPaciente* head)
{
	this->head = head;
}

ListaDePacientes::~ListaDePacientes()
{
	//delete all the nodes
	NodoPaciente* aux = head;
	while (aux != NULL)
	{
		head = head->getSiguiente();
		delete aux;
		aux = head;
	}
}

NodoPaciente* ListaDePacientes::getHead()
{
	return head;
}

void ListaDePacientes::setHead(NodoPaciente* head)
{
	this->head = head;
}

bool ListaDePacientes::isEmpty()
{
	return head == NULL;
}

bool ListaDePacientes::insertarPaciente(Paciente* paciente)
{
	NodoPaciente* nuevo = new NodoPaciente(paciente);
	if (isEmpty())
	{
		head = nuevo;
		return true;
	}
	else
	{
		NodoPaciente* aux = head;
		// se debe de comprobar aqui en caso de que solo exista un paciente registrado
		if (aux->getPaciente()->getIdentificacion() == paciente->getIdentificacion())
		{
			return false;
		}
		while (aux->getSiguiente() != NULL)
		{
			if (aux->getPaciente()->getIdentificacion() == paciente->getIdentificacion())
			{
				return false;
			}
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		return true;
	}
	return false;
}

string ListaDePacientes::mostrarPacientesProfesores()
{
	stringstream ss;
	NodoPaciente* aux = head;
	while (aux != NULL)
	{
		if (aux->getPaciente()->getTipo() == "Profesor")
		{
			ss << aux->toString() << endl;
		}
		aux = aux->getSiguiente();
	}
	return ss.str();
}

string ListaDePacientes::mostrarPacientesEstudiantes()
{
	stringstream ss;
	NodoPaciente* aux = head;
	while (aux != NULL)
	{
		if (aux->getPaciente()->getTipo() == "Estudiante")
		{
			ss << aux->toString() << endl;
		}
		aux = aux->getSiguiente();
	}
	return ss.str();
}

string ListaDePacientes::mostrarPacientes()
{
	stringstream ss;
	ss << "Pacientes Profesores" << endl;
	ss << mostrarPacientesProfesores() << endl;
	ss << "Pacientes Estudiantes" << endl;
	ss << mostrarPacientesEstudiantes() << endl;
	return ss.str();
}

string ListaDePacientes::buscarYMostrarPaciente(string identificacion)
{
	NodoPaciente* aux = head;
	while (aux != NULL)
	{
		if (aux->getPaciente()->getIdentificacion() == identificacion)
		{
			return aux->toString();
		}
		aux = aux->getSiguiente();
	}
	return "No se encontro el paciente";
}

bool ListaDePacientes::existePaciente(string identificacion)
{
	NodoPaciente* aux = head;
	while (aux != NULL)
	{
		if (aux->getPaciente()->getIdentificacion() == identificacion)
		{
			return true;
		}
		aux = aux->getSiguiente();
	}
	return false;
}
