#include "Interfaz.h"
#include "SaludUni.h"

int Interfaz::menuPrincipal()
{
    int opcion = 0;
	cout << "1) Citas" << endl;
	cout << "2) Mantenimiento" << endl;
	cout << "3) Busquedas" << endl;
	cout << "4) Extra" << endl;
	cout << "5) Salir" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

int Interfaz::menuMantenimiento()
{
	int opcion = 0;
	cout << "1) Mantenimiento de Pacientes" << endl;
	cout << "2) Mantenimiento de Medicos" << endl;
	cout << "3) Mantenimiento de Ambulancias" << endl;
	cout << "4) Mantenimiento de Taxis" << endl;
	cout << "5) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}
