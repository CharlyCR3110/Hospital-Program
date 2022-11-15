#include "ListaDeCitas.h"

ListaDeCitas::ListaDeCitas(NodoCitas* head)
{
	this->head = head;
}

ListaDeCitas::~ListaDeCitas()
{
	while (head != NULL)
	{
		NodoCitas* aux = head;
		head = head->getSiguiente();
		delete aux;
	}
}

NodoCitas* ListaDeCitas::getHead()
{
	return head;
}

void ListaDeCitas::setHead(NodoCitas*)
{
	this->head = head;
}

bool ListaDeCitas::isEmpty()
{
	return head == NULL;
}

bool ListaDeCitas::insertarCita(Cita* cita)
{
	NodoCitas* nuevo = new NodoCitas(cita);
	if (isEmpty())
	{
		head = nuevo;
		return true;
	}
	else
	{
		if (this->existeCita(cita->getCodigoCita())) {
			return false;
		}
		NodoCitas* aux = head;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		return true;
	}
	return false;
}

Cita* ListaDeCitas::buscarCita(string codigoCita)
{
	if (!isEmpty()) {
		NodoCitas* aux = head;
		while (aux != NULL)
		{
			if (aux->getCita()->getCodigoCita() == codigoCita) {
				return aux->getCita();
			}
			aux = aux->getSiguiente();
		}
	}
	return NULL;
}

string ListaDeCitas::MostarCitaEspecifica(string codigoCita)
{
	if (buscarCita(codigoCita) != NULL) {
		return buscarCita(codigoCita)->toString();
	}
	return "No se encontro la cita";
}

bool ListaDeCitas::eliminarCita(string codigo)
{
	NodoCitas* aux = head;
	NodoCitas* anterior = NULL;
	while (aux != NULL)
	{
		if (aux->getCita()->getCodigoCita() == codigo)
		{
			//por si es el primero
			if (aux == head)
			{
				head = aux->getSiguiente();
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
	return false;
}

string ListaDeCitas::mostarCitasDeUnPaciente(string identificacion)
{
	//este string puede ser la cedula del paciente o el pasaporte del paciente
	//esto depende de si es un paciente nacional o extranjero
	//Nacionales: Profesores o EstNacional
	//Internacionales: EstInternacional
	NodoCitas* aux = head;
	stringstream ss;
	while (aux != NULL)
	{
		if (aux->getCita()->getPaciente()->getIdentificacion() == identificacion)
		{
			ss << aux->getCita()->toString() << endl;
		}
		aux = aux->getSiguiente();
	}
	return ss.str();
}

bool ListaDeCitas::existeCita(string codigoCita)
{
	if (!isEmpty()) {
		NodoCitas* aux = head;
		while (aux != NULL)
		{
			if (aux->getCita()->getCodigoCita() == codigoCita)
			{
				return true;
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}

bool ListaDeCitas::existeOtraCitaAlMismoTiempo(Fecha* fecha, Hora* hora)
{
	//entre cita y cita debe de haber al menos una diferenincia de 30 minutos
	NodoCitas* aux = head;
	while (aux != NULL)
	{
		if (aux->getCita()->getFecha()->getDia() == fecha->getDia() &&
			aux->getCita()->getFecha()->getMes() == fecha->getMes() &&
			aux->getCita()->getFecha()->getAnio() == fecha->getAnio() &&
			aux->getCita()->getHora()->getHora() == hora->getHora() &&
			aux->getCita()->getHora()->getMinutos() == hora->getMinutos())
		{
			return true;
		}
		aux = aux->getSiguiente();
	}
	return false;
}

bool ListaDeCitas::elPacienteYaTieneOtraCitaAlMismoTiempo(Paciente* paciente, Fecha* fecha, Hora* hora)
{
	NodoCitas* aux = head;
	while (aux != NULL)
	{
		if (aux->getCita()->getFecha()->getDia() == fecha->getDia() &&
			aux->getCita()->getFecha()->getMes() == fecha->getMes() &&
			aux->getCita()->getFecha()->getAnio() == fecha->getAnio() &&
			aux->getCita()->getHora()->getHora() == hora->getHora() &&
			aux->getCita()->getPaciente()->getIdentificacion() == paciente->getIdentificacion())
		{
			return true;
		}
		aux = aux->getSiguiente();
	}
	return false;
}

bool ListaDeCitas::elMedicoYaTieneOtraCitaAlMismoTiempo(Medico* medico, Fecha* fecha, Hora* hora)
{
	NodoCitas* aux = head;
	while (aux != NULL)
	{
		if (aux->getCita()->getFecha()->getDia() == fecha->getDia() &&
			aux->getCita()->getFecha()->getMes() == fecha->getMes() &&
			aux->getCita()->getFecha()->getAnio() == fecha->getAnio() &&
			aux->getCita()->getHora()->getHora() == hora->getHora() &&
			aux->getCita()->getMedico()->getCedula() == medico->getCedula())
		{
			return true;
		}
		aux = aux->getSiguiente();
	}
	return false;
}
