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

int Interfaz::menuMantenimientoPacientes()
{
	int opcion = 0;
	cout << "1) Agregar Paciente" << endl;
	cout << "2) Eliminar Paciente" << endl;
	cout << "3) Modificar Paciente" << endl;
	cout << "4) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::menuEditarPaciente()
{
	cout << "1) Nombre" << endl;
	cout << "2) Apellido" << endl;
	cout << "3) Edad" << endl;
	cout << "4) Universidad" << endl;
}

int Interfaz::menuEditarEstudianteNacional()
{
	int opcion = 0;
	menuEditarPaciente();
	cout << "5) Codigo de carrera" << endl;
	cout << "6) Ultimo nivel cursado" << endl;
	cout << "7) Numero de telefono" << endl;
	cout << "8) Estado" << endl;
	cout << "9) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}
