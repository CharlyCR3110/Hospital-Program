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
		if (this->existePaciente(paciente->getIdentificacion())) {
			return false;
		}
		NodoPaciente* aux = head;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		return true;
	}
	return false;
}

bool ListaDePacientes::eliminarPaciente(string identificaion)
{
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		NodoPaciente* anterior = NULL;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getIdentificacion() == identificaion)
			{
				if (anterior == NULL)
				{
					head = head->getSiguiente();
					delete aux;
					return true;
				}
				else
				{
					anterior->setSiguiente(aux->getSiguiente());
					delete aux;
					return true;
				}
			}
			anterior = aux;
			aux = aux->getSiguiente();
		}
	}
	return false;
}

Paciente* ListaDePacientes::buscarPaciente(string identificacion)
{
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getIdentificacion() == identificacion)
			{
				return aux->getPaciente();
			}
			aux = aux->getSiguiente();
		}
	}
	return NULL;
}

string ListaDePacientes::mostrarProfesoresInterinos()
{
	stringstream ss;
	bool hayProfesoresInterinos = false;
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getTipo() == "Interino")
			{
				ss << aux->getPaciente()->toString();
				hayProfesoresInterinos = true;
			}
			aux = aux->getSiguiente();
		}
	}
	if (!hayProfesoresInterinos) {
		ss << "No hay profesores interinos registrados" << endl;
	}
	return ss.str();

}

string ListaDePacientes::mostrarProfesoresConPropiedad()
{
	stringstream ss;
	bool hayProfesoresConPropiedad = false;
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getTipo() == "Con Propiedad")
			{
				ss << aux->getPaciente()->toString();
				hayProfesoresConPropiedad = true;
			}
			aux = aux->getSiguiente();
		}
	}
	if (!hayProfesoresConPropiedad) {
		ss << "No hay profesores con propiedad registrados" << endl;
	}
	return ss.str();

}

string ListaDePacientes::mostrarProfesores()
{
	stringstream ss;
	ss << "--------Profesores Interinos--------" << endl;
	ss << mostrarProfesoresInterinos() << endl;
	ss << "--------Profesores Con Propiedad--------" << endl;
	ss << mostrarProfesoresConPropiedad() << endl;
	return ss.str();
}

string ListaDePacientes::mostrarEstudiantesNacionales()
{
	stringstream ss;
	bool hayEstudiantesNacionales = false;
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getTipo() == "Nacional")
			{
				ss << aux->getPaciente()->toString();
				hayEstudiantesNacionales = true;
			}
			aux = aux->getSiguiente();
		}
	}
	if (!hayEstudiantesNacionales) {
		ss << "No hay estudiantes nacionales registrados" << endl;
	}
	return ss.str();

}

string ListaDePacientes::mostrarEstudiantesInternacionales()
{
	stringstream ss;
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getTipo() == "Internacional")
			{
				ss << aux->getPaciente()->toString();
			}
			aux = aux->getSiguiente();
		}
	}
	else {
		ss << "No hay estudiantes internacionales registrados";
	}
	return ss.str();
}

string ListaDePacientes::mostrarTodosLosEstudiantes()
{
	stringstream ss;
	ss << "--------Estudiantes Nacionales--------" << endl;
	ss << mostrarEstudiantesNacionales() << endl;
	ss << "--------Estudiantes Internacionales--------" << endl;
	ss << mostrarEstudiantesInternacionales() << endl;
	return ss.str();
}

string ListaDePacientes::mostrarPacientes()
{
	stringstream ss;
	ss << mostrarProfesores();
	ss << mostrarTodosLosEstudiantes();
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
	if (!isEmpty()) {
		NodoPaciente* aux = head;
		while (aux != NULL)
		{
			if (aux->getPaciente()->getIdentificacion() == identificacion)
			{
				return true;
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}
