#include "ListaDeTransportes.h"

ListaDeTransportes::ListaDeTransportes(NodoTransporte* head)
{
	this->head = head;
}

ListaDeTransportes::~ListaDeTransportes()
{
	while (head != NULL)
	{
		NodoTransporte* aux = head;
		head = head->getSiguiente();
		delete aux;
	}
}

NodoTransporte* ListaDeTransportes::getHead()
{
	return head;
}

void ListaDeTransportes::setHead(NodoTransporte* head)
{
	this->head = head;
}

bool ListaDeTransportes::isEmpty()
{
	return head == NULL;
}

bool ListaDeTransportes::insertarTransporte(Transporte* transporte)
{
	if (transporte != NULL)
	{
		NodoTransporte* nuevo = new NodoTransporte(transporte);
		if (isEmpty())
		{
			head = nuevo;
		}
		else
		{
			NodoTransporte* aux = head;
			// se debe de comprobar aqui en caso de que solo exista un transporte registrado
			if (aux->getTransporte()->getPlaca() == transporte->getPlaca())
			{
				return false;
			}
			while (aux->getSiguiente() != NULL)
			{
				//comprobar que no exista otro transporte con esa placa
				if (aux->getTransporte()->getPlaca() == transporte->getPlaca())
				{
					return false;
				}
				aux = aux->getSiguiente();
			}
			aux->setSiguiente(nuevo);
		}
		return true;
	}
	return false;
}

bool ListaDeTransportes::eliminarTransporte(string placa)
{
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		// si el primer elemento es el que se desea eliminar
		if (aux->getTransporte()->getPlaca() == placa)
		{
			head = head->getSiguiente();
			delete aux;
			return true;
		}
		while (aux->getSiguiente() != NULL)
		{
			if (aux->getSiguiente()->getTransporte()->getPlaca() == placa)
			{
				NodoTransporte* aux2 = aux->getSiguiente();
				aux->setSiguiente(aux->getSiguiente()->getSiguiente());
				delete aux2;
				return true;
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}

bool ListaDeTransportes::existeTransporte(string placa)
{
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		while (aux != NULL)
		{
			if (aux->getTransporte()->getPlaca() == placa)
			{
				return true;
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}

bool ListaDeTransportes::existeAmbulancia(string codigo)
{
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		while (aux != NULL)
		{
			if (aux->getTransporte()->getTipo() == "Ambulancia")
			{
				if (aux->getTransporte()->getCodigo() == codigo)
				{
					return true;
				}
			}
			aux = aux->getSiguiente();
		}
	}
	return false;
}

Transporte* ListaDeTransportes::getTransporte(string placa)
{
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		while (aux != NULL)
		{
			if (aux->getTransporte()->getPlaca() == placa)
			{
				return aux->getTransporte();
			}
			aux = aux->getSiguiente();
		}
	}
	return NULL;
}

Transporte* ListaDeTransportes::getAmbulancia(string codigo)
{
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		while (aux != NULL)
		{
			if (aux->getTransporte()->getTipo() == "Ambulancia")
			{
				if (aux->getTransporte()->getCodigo() == codigo)
				{
					return aux->getTransporte();
				}
			}
			aux = aux->getSiguiente();
		}
	}
	return NULL;
}

string ListaDeTransportes::mostrarTaxis()
{
	stringstream ss;
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		while (aux != NULL)
		{
			if (aux->getTransporte()->getTipo() == "Taxi")
			{
				ss << aux->getTransporte()->toString() << endl;
			}
			aux = aux->getSiguiente();
		}
	}
	else {
		ss << "No hay taxis registrados";
	}
	return ss.str();
}

string ListaDeTransportes::mostrarAmbulancias()
{
	stringstream ss;
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		while (aux != NULL)
		{
			if (aux->getTransporte()->getTipo() == "Ambulancia")
			{
				ss << aux->getTransporte()->toString() << endl;
			}
			aux = aux->getSiguiente();
		}
	}

	else {
		ss << "No hay ambulancias registradas";
	}
	return ss.str();
}

string ListaDeTransportes::mostrarTransportes()
{
	stringstream ss;
	ss << "--------Ambulancias--------" << endl;
	ss << this->mostrarAmbulancias() << endl;
	ss << "--------Taxis--------" << endl;
	ss << this->mostrarTaxis() << endl;
	return ss.str();
}

string ListaDeTransportes::calcularCostoTotalPorTaxis()
{
	stringstream ss;
	if (!isEmpty())
	{
		NodoTransporte* aux = head;
		double costoTotal = 0;
		while (aux != NULL)
		{
			if (aux->getTransporte()->getTipo() == "Taxi")
			{
				costoTotal += aux->getTransporte()->getCostoDelViaje();
			}
			aux = aux->getSiguiente();
		}
		ss << "El monto total a pagar por concepto de taxis es: " << costoTotal;
	}
	else {
		ss << "No hay taxis registrados";
	}
	return ss.str();
}
