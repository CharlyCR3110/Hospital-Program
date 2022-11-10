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
	ss << "1) Mostrar Pacientes" << endl;
	ss << "2) Mostrar Medicos" << endl;
	ss << "3) Mostrar Transportes" << endl;
	ss << "4) Buscar Elemento Especifico" << endl;
	ss << "5) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuExtra() {
	//reportar = mostrar
	stringstream ss;
	ss << "1) Reportar de los datos de la empresa." << endl;
	ss << "2) Reportar el monto total a pagar por parte del hospital por concepto de taxis." << endl;
	ss << "3) Reporte de la persona que ha realizado más citas en el hospital." << endl;
	ss << "4) Reportar la fecha en que han asistido mayor número de pacientes." << endl;
	ss << "5) Reportar el tipo de transporte más utilizado por los paciente (propio, taxi, ambulancia)" << endl;
	ss << "6) Reportar lista de ambulancias que se encuentran “ocupadas”." << endl;
	ss << "7) Reportar lista de tres profesores interinos con la mejor calificación." << endl;
	ss << "8) Reportar lista de todos los estudiantes internacionales que tengan condición de exiliado" << endl;
	ss << "9) Regresar" << endl;
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
	int opcionBusquedas = 0;
	int opcionExtra = 0;
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
			//Busquedas

			break;
		case 4:
			//Menu extra
			do {
				cout << menuExtra();
				cin >> opcionExtra;
				std::system("cls");
				switch (opcionExtra) {
					//ss << "1) Reportar de los datos de la empresa." << endl;
					//ss << "2) Reportar el monto total a pagar por parte del hospital por concepto de taxis." << endl;
					//ss << "3) Reporte de la persona que ha realizado más citas en el hospital." << endl;
					//ss << "4) Reportar la fecha en que han asistido mayor número de pacientes." << endl;
					//ss << "5) Reportar el tipo de transporte más utilizado por los paciente (propio, taxi, ambulancia)" << endl;
					//ss << "6) Reportar lista de ambulancias que se encuentran “ocupadas”." << endl;
					//ss << "7) Reportar lista de tres profesores interinos con la mejor calificación." << endl;
					//ss << "8) Reportar lista de todos los estudiantes internacionales que tengan condición de exiliado" << endl;
				case 1:
					//Mostrar datos de la empresa 
					cout << "TEST OPCION 1 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 2:
					//Monto total a pagar por taxis
					cout << "TEST OPCION 2 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 3:
					//Persona que ha realizado más citas
					cout << "TEST OPCION 3 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 4:
					//Fecha en que han asistido mayor número de pacientes
					cout << "TEST OPCION 4 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 5:
					//Tipo de transporte más utilizado por los pacientes
					cout << "TEST OPCION 5 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 6:
					//Lista de ambulancias ocupadas
					cout << "TEST OPCION 6 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 7:
					//Lista de tres profesores interinos con la mejor calificación
					cout << "TEST OPCION 7 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 8:
					//Lista de todos los estudiantes internacionales que tengan condición de exiliado
					cout << "TEST OPCION 8 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 9:
					//Regresar
					cout << "REGRESANDO..." << endl;
					pausarYLimpiar();
					break;
				}
			} while (opcionExtra != 9);
			break;
		case 5:
			cout << "Adios" << endl;
		}	
	} while (opcionPrincipal != 5);
	return 0;
}