#include "ConPropiedad.h"
#include "Interino.h"
#include "Profesor.h"
#include "Estudiante.h"
#include "EstNacional.h"
#include "EstInternacional.h"
#include "ListaDeMedicos.h"

string menuPrincipal() {
	stringstream ss;
	ss << "1) Citas" << endl;
	ss << "2) Mantenimiento" << endl;
	ss << "3) Busquedas" << endl;
	ss << "4) Salir" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuCitas() {
	stringstream ss;
	ss << "1) Agregar cita" << endl;
	ss << "2) Buscar cita" << endl;
	ss << "3) Eliminar cita" << endl;
	ss << "4) Mostrar citas de un paciente" << endl;
	ss << "5) Mostrar todas las citas" << endl;
	ss << "6) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuMantenimiento() {
	stringstream ss;
	ss << "1) Mantenimiento de Pacientes" << endl;
	ss << "2) Mantenimiento de Medicos" << endl;
	ss << "3) Mantenimiento de Ambulancias" << endl;
	ss << "4) Mantenimiento de Taxis" << endl;
	ss << "5) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuMantenimientoPacientes() {
	stringstream ss;
	ss << "1) Agregar Paciente" << endl;
	ss << "2) Eliminar Paciente" << endl;
	ss << "3) Modificar Paciente" << endl;
	ss << "4) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuMantenimientoMedicos() {
	stringstream ss;
	ss << "1) Agregar Medico" << endl;
	ss << "2) Eliminar Medico" << endl;
	ss << "3) Modificar Medico" << endl;
	ss << "4) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuMantenimientoAmbulancias() {
	stringstream ss;
	ss << "1) Agregar Ambulancia" << endl;
	ss << "2) Eliminar Ambulancia" << endl;
	ss << "3) Modificar Ambulancia" << endl;
	ss << "4) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuMantenimientoTaxis() {
	stringstream ss;
	ss << "1) Agregar Taxi" << endl;
	ss << "2) Eliminar Taxi" << endl;
	ss << "3) Modificar Taxi" << endl;
	ss << "4) Extra" << endl;
	ss << "5) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuBusquedas() {
	stringstream ss;
	ss << "1) Buscar Paciente" << endl;
	ss << "2) Buscar Medico" << endl;
	ss << "3) Buscar Ambulancia" << endl;
	ss << "4) Buscar Taxi" << endl;
	ss << "5) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

void pausarYLimpiar() {
	system("pause");
	system("cls");
}

int main() {
	int opcionPrincipal = 0;
	int opcionCitas = 0;
	int opcionMantenimiento = 0;
	int opcionSubMenuMantenimiento = 0;
	do {
		cout << menuPrincipal();
		cin >> opcionPrincipal; 
		std::system("cls");
		switch (opcionPrincipal) {
		case 1:
				do {
					cout << menuCitas();
					cin >> opcionCitas;
					std::system("cls");
					switch (opcionCitas) {
					case 1:
						//Agregar cita
						cout << "TEST OPCION 1 SUBMENU 1" << endl;
						pausarYLimpiar();
						break;
					case 2:
						//Buscar cita
						cout << "TEST OPCION 2 SUBMENU 1" << endl;
						pausarYLimpiar();
						break;
					case 3:
						//Eliminar cita
						cout << "TEST OPCION 3 SUBMENU 1" << endl;
						pausarYLimpiar();
						break;
					case 4:
						//Mostrar citas de un paciente
						cout << "TEST OPCION 4 SUBMENU 1" << endl;
						pausarYLimpiar();
						break;
					case 5:
						//Mostrar todas las citas
						cout << "TEST OPCION 5 SUBMENU 1" << endl;
						pausarYLimpiar();
						break;
					case 6:
						//Regresar
						cout << "Regresando..." << endl;
						pausarYLimpiar();
						break;
					default:
						cout << "Opcion invalida" << endl;
						pausarYLimpiar();
						break;
					}
				} while (opcionCitas != 6);
				break;
		case 2:
				do {
					cout << menuMantenimiento();
					cin >> opcionMantenimiento;
					std::system("cls");
					switch (opcionMantenimiento) {
					case 1:
						//Mantenimiento de Pacientes
						cout << menuMantenimientoPacientes();
						cin >> opcionSubMenuMantenimiento;
						std::system("cls");
						switch (opcionSubMenuMantenimiento) {
						case 1:
							//Agregar Paciente
							cout << "TEST OPCION 1 SUBMENU 2 SUBMENU 1" << endl;
							pausarYLimpiar();
							break;
						case 2:
							//Eliminar Paciente
							cout << "TEST OPCION 2 SUBMENU 2 SUBMENU 1" << endl;
							pausarYLimpiar();
							break;
						case 3:
							//Modificar Paciente
							cout << "TEST OPCION 3 SUBMENU 2 SUBMENU 1" << endl;
							pausarYLimpiar();
							break;
						case 4:
							//Regresar
							cout << "REGRESANDO..." << endl;
							pausarYLimpiar();
							break;
						default:
							cout << "Opcion invalida" << endl;
							pausarYLimpiar();
							break;
						}
						break;
					case 2:
						//Mantenimiento de Medicos
						cout << menuMantenimientoMedicos();
						cin >> opcionSubMenuMantenimiento;
						std::system("cls");
						switch (opcionSubMenuMantenimiento) {
						case 1:
							//Agregar Medico
							cout << "TEST OPCION 1 SUBMENU 2 SUBMENU 2" << endl;
							pausarYLimpiar();
							break;
						case 2:
							//Eliminar Medico
							cout << "TEST OPCION 2 SUBMENU 2 SUBMENU 2" << endl;
							pausarYLimpiar();
							break;
						case 3:
							//Modificar Medico
							cout << "TEST OPCION 3 SUBMENU 2 SUBMENU 2" << endl;
							pausarYLimpiar();
							break;
						case 4:
							//Regresar
							cout << "REGRESANDO..." << endl;
							pausarYLimpiar();
							break;
						default:
							cout << "Opcion invalida" << endl;
							pausarYLimpiar();
							break;
						}
						break;
					case 3:
						//Mantenimiento Ambulancias
						cout << menuMantenimientoAmbulancias();
						cin >> opcionSubMenuMantenimiento;
						std::system("cls");
						switch (opcionSubMenuMantenimiento) {
						case 1:
							//Agregar Ambulancia
							cout << "TEST OPCION 1 SUBMENU 2 SUBMENU 3" << endl;
							pausarYLimpiar();
							break;
						case 2:
							//Eliminar Ambulancia
							cout << "TEST OPCION 2 SUBMENU 2 SUBMENU 3" << endl;
							pausarYLimpiar();
							break;
						case 3:
							//Modificar Ambulancia
							cout << "TEST OPCION 3 SUBMENU 2 SUBMENU 3" << endl;
							pausarYLimpiar();
							break;
						case 4:
							//Regresar
							cout << "REGRESANDO..." << endl;
							pausarYLimpiar();
							break;
						default:
							cout << "Opcion invalida" << endl;
							pausarYLimpiar();
							break;
						}
						break;
					case 4:
						cout << menuMantenimientoTaxis();
						cin >> opcionSubMenuMantenimiento;
						std::system("cls");
						switch (opcionSubMenuMantenimiento) {
						case 1:
							//Agregar Taxi
							cout << "TEST OPCION 1 SUBMENU 2 SUBMENU 3" << endl;
							pausarYLimpiar();
							break;
						case 2:
							//Eliminar Taxi
							cout << "TEST OPCION 2 SUBMENU 2 SUBMENU 3" << endl;
							pausarYLimpiar();
							break;
						case 3:
							//Modificar Taxi
							cout << "TEST OPCION 3 SUBMENU 2 SUBMENU 3" << endl;
							pausarYLimpiar();
							break;
						case 4:
							//Regresar
							cout << "REGRESANDO..." << endl;
							pausarYLimpiar();
							break;
						default:
							cout << "Opcion invalida" << endl;
							pausarYLimpiar();
							break;
						}
						break;
					case 5:
						//Regresar
						cout << "REGRESANDO..." << endl;
						pausarYLimpiar();
						break;
					}
				} while (opcionMantenimiento != 5);
				break;
		case 3:
			//busquedas
			cout << menuBusquedas();
		case 5:
			cout << "Adios" << endl;
		}
	} while (opcionPrincipal != 5);
	return 0;
}