#include "ListaDeMedicos.h"

ListaDeMedicos::ListaDeMedicos(NodoMedico* head)
{
	this->head = head;
}

ListaDeMedicos::~ListaDeMedicos()
{
	while (head != NULL)
	{
		NodoMedico* aux = head;
		head = head->getSiguiente();
		delete aux;
	}
}

NodoMedico* ListaDeMedicos::getHead()
{
	return head;
}

void ListaDeMedicos::setHead(NodoMedico* head)
{
	this->head = head;
}

bool ListaDeMedicos::isEmpty()
{
	return head == NULL;
}

bool ListaDeMedicos::insertarMedico(Medico* medico)
{
	NodoMedico* nuevo = new NodoMedico(medico);
	if (isEmpty())
	{
		head = nuevo;
		return true;
	}
	else
	{
		if (this->existeMedico(medico->getCedula())) {
			return false;
		}
		NodoMedico* aux = head;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		return true;
	}
	return false;
}

bool ListaDeMedicos::existeMedico(string cedula)
{
	if (!isEmpty()) {
		NodoMedico* aux = head;
		while (aux != NULL)
		{
			if (aux->getMedico()->getCedula() == cedula) {
				return true;
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}

bool ListaDeMedicos::eliminarMedico(string cedula)
{
	if (!isEmpty()) {
		NodoMedico* aux = head;
		NodoMedico* anterior = NULL;
		while (aux != NULL)
		{
			if (aux->getMedico()->getCedula() == cedula) {
				if (anterior == NULL) {
					head = aux->getSiguiente();
					delete aux;
					return true;
				}
				else {
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

Medico* ListaDeMedicos::buscarMedico(string cedula)
{
	if (!isEmpty()) {
		NodoMedico* aux = head;
		while (aux != NULL)
		{
			if (aux->getMedico()->getCedula() == cedula) {
				return aux->getMedico();
			}
			aux = aux->getSiguiente();
		}
	}
	return NULL;
}

string ListaDeMedicos::mostrarMedicos()
{
	stringstream ss;
	if (!isEmpty()) {
		NodoMedico* aux = head;
		while (aux != NULL)
		{
			ss << aux->getMedico()->toString() << endl;
			aux = aux->getSiguiente();
		}
	}
	else {
		ss << "No hay medicos registrados" << endl;
	}
	return ss.str();
}
