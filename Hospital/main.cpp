#include "ConPropiedad.h"
#include "Interino.h"
#include "Profesor.h"
#include "Estudiante.h"
#include "EstNacional.h"
#include "EstInternacional.h"
#include "ListaDeMedicos.h"
#include "SaludUni.h"
#include "Taxi.h"
#include "Ambulancia.h"

string menuPrincipal() {
	stringstream ss;
	ss << "1) Citas" << endl;
	ss << "2) Mantenimiento" << endl;
	ss << "3) Busquedas" << endl;
	ss << "4) Extra" << endl;
	ss << "5) Salir" << endl;
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

//string nombre, string apellido, int edad, string universidad,
//string codigoDeCarrera, int ultNivelCursado, string numeroDeTelefono, string cedula, string estado

//(string nombre, string apellido, int edad, string universidad
string menuEditarPaciente() {
	stringstream ss;
	ss << "1) Nombre" << endl;
	ss << "2) Apellido" << endl;
	ss << "3) Edad" << endl;
	ss << "4) Universidad" << endl;
	return ss.str();
}

string menuEditarEstudianteNacional() {
	stringstream ss;
	ss << menuEditarPaciente();
	ss << "5) Codigo de carrera" << endl;
	ss << "6) Ultimo nivel cursado" << endl;
	ss << "7) Numero de telefono" << endl;
	ss << "8) Estado" << endl;
	ss << "9) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuEditarEstudianteInternacional() {
	stringstream ss;
	ss << menuEditarPaciente();
	ss << "5) Codigo de carrera" << endl;
	ss << "6) Ultimo nivel cursado" << endl;
	ss << "7) Numero de telefono" << endl;
	ss << "8) Nacionalidad" << endl;
	ss << "9) Condicion" << endl;
	ss << "10) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuEditarPacienteProfesorConPropiedad() {
	stringstream ss;
	ss << menuEditarPaciente();
	ss << "5) Titulo" << endl;
	ss << "6) Anios laborados" << endl;
	ss << "7) Numero de propiedad" << endl;
	ss << "8) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuEditarPacienteProfesorInterino() {
	stringstream ss;
	ss << menuEditarPaciente();
	ss << "5) Titulo" << endl;
	ss << "6) Anios laborados" << endl;
	ss << "7) Calificacion" << endl;
	ss << "8) Regresar" << endl;
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
// (string nombre, string apellido, int edad, string cedula, string especialidad, string numTelefonico
string menuEditarMedico() {
	stringstream ss;
	ss << "1) Nombre" << endl;
	ss << "2) Apellido" << endl;
	ss << "3) Edad" << endl;
	ss << "4) Especialidad" << endl;
	ss << "5) Numero telefonico" << endl;
	ss << "6) Regresar" << endl;
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

string menuEditarAmbulancia() {
	stringstream ss;
	ss << "1) Numero de placa" << endl;
	ss << "2) Marca" << endl;
	ss << "3) Codigo" << endl;
	ss << "4) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuMantenimientoTaxis() {
	stringstream ss;
	ss << "1) Agregar Taxi" << endl;
	ss << "2) Eliminar Taxi" << endl;
	ss << "3) Modificar Taxi" << endl;
	ss << "4) Regresar" << endl;
	ss << "Ingrese una opcion: ";
	return ss.str();
}

string menuEditarTaxi() {
	stringstream ss;
	ss << "1) Numero de placa" << endl;
	ss << "2) Marca" << endl;
	ss << "3) Codigo" << endl;
	ss << "4) Regresar" << endl;
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
	ss << "3) Reporte de la persona que ha realizado m�s citas en el hospital." << endl;
	ss << "4) Reportar la fecha en que han asistido mayor n�mero de pacientes." << endl;
	ss << "5) Reportar el tipo de transporte m�s utilizado por los paciente (propio, taxi, ambulancia)" << endl;
	ss << "6) Reportar lista de ambulancias que se encuentran �ocupadas�." << endl;
	ss << "7) Reportar lista de tres profesores interinos con la mejor calificaci�n." << endl;
	ss << "8) Reportar lista de todos los estudiantes internacionales que tengan condici�n de exiliado" << endl;
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
	
	//datos necesarios para la opcion 1.1
	//datos necesarios para la opcion 1.2
	string codigoCita;
	//datos necesarios para la opcion 2.1.1 (agregar paciente)
	
	//datos globales
	string nombre = "";
	string apellido = "";
	int edad = 0;
	string universidad = "";
	string tipo = "";
	//si el paciente es estudiante
	string codigoDeCarrera = "";
	string ultNivelCursado = "";
	string numeroDeTelefono = "";
	//para ver si es nacional o internacional
	string esNacional = "";
	//si el paciente es estudiante nacional
	string cedula = "";
	string estado = "";
	//si el paciente es estudiante internacional
	string nacionalidad = "";
	string pasaporte = "";
	string condicion = "";
	//si el paciente es profesor
	//string cedula = "";
	string titulo = "";
	int aniosLaborados = 0;
	string tienePropiedad = "";
	//si el pacient es profesor interino
	double calificacion = 0.0;
	//si el paciente es profesor con plaza
	string codigoDePlaza = "";
	
	//datos necesarios para la opcion 2.1.2 (eliminar paciente)
	string identificacion = ""; //puede ser la cedula o el pasaporte

	//miscelaneos 
	bool done = false;
	string volverAIntentar = "";
	//datos necesarios para la opcion 2.1.3 (editar paciente)
	int opcionEditarPaciente = 0;
	//datos necesarios para la opcion 2.2.1
	string especialidad = "";
	//datos necesarios para la opcion 2.2.3 (editar medico)
	int opcionEditarMedico = 0;
	//datos necesarios para la opcion 2.3.1 (agregar ambulancia)
	string placa = "";
	string marca = "";
	string codigo = "";
	//datos necesarios para la opcion 2.3.3 (editar ambulancia)
	int opcionEditarAmbulancia = 0;
	string placaNueva = "";
	//datos necesarios para la opcion 2.4.3 (editar taxi)
	double kilometrosRecorridos = 0.0;
	int opcionEditarTaxi = 0;

	//prueba
	//string codigoCita;
	//Paciente* paciente;
	//Medico* medico;
	//Hora* hora;
	//Fecha* fecha;
	//Transporte* transporte;

	SaludUni* hospital = new SaludUni("CCSS0011", "2639-2121", "Escazu", "Hospital Universitario");
	//string nombre, string apellido, int edad, string universidad, string cedula, string titulo, int aniosLaborados, double calificacion
	Paciente* paciente = new Interino("Juan", "Quiros", 28, "UNA", "602900217", "Sistemas", 5, 7.5);
	//string nombre, string apellido, int edad, string cedula, string especialidad, string numTelefonico
	Medico* medico1 = new Medico("Pedro", "Perez", 35, "60390217", "Cardiologia", "26-2121");
	Medico* medico2 = new Medico("Juan Jose", "Quiros", 35, "602110211", "Sexologo", "639-2121");
	Medico* medico3 = new Medico("Kevin", "Rodriguez", 35, "1123", "Sexologo", "239-2121");
	//(string placa, string marca, string tipoDeViaje, double kilometrosRecorridos, int numeroDePasajeros
	Transporte* taxi = new Taxi("P-1234", "Toyota", 8, 1);
	//estNacional
	//string nombre, string apellido, int edad, string universidad,
	//	string codigoDeCarrera, int ultNivelCursado, string numeroDeTelefono, string cedula, string estado
	Paciente* estNacional1 = new EstNacional("Juan", "Quiros", 28, "UNA", "11111", "Primero", "2639-2121", "601290217", "activo");
	//string nombre, string apellido, int edad, string universidad,
	/*string codigoDeCarrera, int ultNivelCursado, string numeroDeTelefono, string nacionalidad,
		string pasaporte, string condicion*/
	Paciente* estInternacional1 = new EstInternacional("Carlos", "Quiros", 28, "UNA", "11111", "Cuarto", "2639-2121", "Boliaviano", "604440217", "activo");
	//string nombre, string apellido, int edad, string universidad, string cedula, string titulo, 
	//int aniosLaborados, string codigoDePlaza)
	Paciente* profesorConPlaza1 = new ConPropiedad("Mario", "Quiros", 28, "UNA", "605590217", "Sistemas", 5, "11111");
	
	hospital->insertarMedico(medico1); 
	hospital->insertarMedico(medico2);
	hospital->insertarMedico(medico3);
	hospital->insertarPaciente(estNacional1);
	hospital->insertarPaciente(paciente);
	hospital->insertarPaciente(estInternacional1);
	hospital->insertarPaciente(profesorConPlaza1);
	hospital->insertarTransporte(taxi);
	
	
	
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
					//se solicitan los datos necesarios, luego se crea la cita y se agrega al hospital
					//se debe validar que el paciente y el medico existan
					//se debe validar que el paciente no tenga una cita en la misma fecha y hora
					//se debe validar que el medico no tenga una cita en la misma fecha y hora
					//se debe validar que el transporte no tenga una cita en la misma fecha y hora
					
					//datos necesarios para la opcion 1.1
					
					break;
				case 2:
					//Buscar cita
					cout << "TEST OPCION 2 SUBMENU 1" << endl;
					cout << "Ingrese el codigo de la cita: ";
					cin >> codigoCita;
					if (hospital->getListaDeCitas()->existeCita(codigoCita)) {
						cout << hospital->mostrarCita(codigoCita);
					}
					else {
						cout << "La cita no existe" << endl;
					}
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
						cout << "Digite el nombre del paciente: ";
						cin >> nombre;
						cout << "Digite el apellido del paciente: ";
						cin >> apellido;
						cout << "Digite la edad del paciente: ";
						cin >> edad;
						cout << "Digite la universidad del paciente: ";
						cin >> universidad;
						cout << "Digite el tipo de paciente: (estudiante/profesor)";
						cin >> tipo;
						if (tipo == "estudiante") {
							cout << "Digite el codigo de carrera: ";
							cin >> codigoDeCarrera;
							cout << "Digite el ultimo nivel cursado: ";
							cin >> ultNivelCursado;
							cout << "Digite el numero de telefono: ";
							cin >> numeroDeTelefono;
							
							cout << "El estudiante es nacional? (si/no): ";
							cin >> esNacional;
							if (esNacional == "si" || esNacional == "Si") {
								do {
									cout << "Digite el numero de cedula: ";
									cin >> cedula;
									if (hospital->getListaDePacientes()->existePaciente(cedula)) {
										cout << "El paciente ya existe" << endl;
										pausarYLimpiar();
								cout << "Desea intentarlo de nuevo? (si/no): ";
								cin >> volverAIntentar;
								if (volverAIntentar == "si" || volverAIntentar == "Si") {
									done = false;
								}
								else if (volverAIntentar == "no" || volverAIntentar == "No") {
									done = true;
								}
								else {
									cout << "Opcion invalida" << endl;
									done = true;
								}
									}
									else {
										done = true;
									}
								} while (!done);
								cout << "Digite el estado (activo/suspendido): ";
								cin >> estado;
								//se crea el estNacional y se agrega a la lista de pacientes
								Paciente* estNacional = new EstNacional(nombre, apellido, edad, universidad, codigoDeCarrera, ultNivelCursado, numeroDeTelefono, cedula, estado);
								hospital->insertarPaciente(estNacional);
							} else if (esNacional == "no" || esNacional == "No") {
								cout << "Digite la nacionalidad: ";
								cin >> nacionalidad;
								do {
									cout << "Digite el numero de pasaporte: ";
									cin >> pasaporte;
									if (hospital->getListaDePacientes()->existePaciente(pasaporte)) {
										cout << "El paciente ya existe" << endl;
										pausarYLimpiar();
										cout << "Desea intentarlo de nuevo? (si/no): ";
										cin >> volverAIntentar;
										if (volverAIntentar == "si" || volverAIntentar == "Si") {
											done = false;
										}
										else if (volverAIntentar == "no" || volverAIntentar == "No") {
											done = true;
										}
										else {
											cout << "Opcion invalida" << endl;
											done = true;
										}
									}
									else {
										done = true;
									}
								} while (!done);
								cout << "Digite la condicion: ";
								cin >> condicion;
								//se crea el estInternacional y se agrega a la lista de pacientes
								Paciente* estInternacional = new EstInternacional(nombre, apellido, edad, universidad, codigoDeCarrera, ultNivelCursado, numeroDeTelefono, nacionalidad, pasaporte, condicion);
								hospital->insertarPaciente(estInternacional);
							} else {
								cout << "Opcion invalida" << endl;
							}
						} else if (tipo == "profesor") {
							do {
								cout << "Digite el numero de cedula: ";
								cin >> cedula;
								if (hospital->getListaDePacientes()->existePaciente(cedula)) {
									cout << "El paciente ya existe" << endl;
									pausarYLimpiar();
									cout << "Desea intentarlo de nuevo? (si/no): ";
									cin >> volverAIntentar;
									if (volverAIntentar == "si" || volverAIntentar == "Si") {
										done = false;
									}
									else if (volverAIntentar == "no" || volverAIntentar == "No") {
										done = true;
									}
									else {
										cout << "Opcion invalida" << endl;
										done = true;
									}
								} else {
									done = true;
								}
							} while (!done);
							cout << "Digite el titulo del profesor: ";
							cin >> titulo;
							cout << "Digite la cantidad de anios de laborados: ";
							cin >> aniosLaborados;
							
							cout << "Es un profesor con propiedad? (si/no): ";
							cin >> tienePropiedad;
							if (tienePropiedad == "si" || tienePropiedad == "Si") {
								cout << "Digite el codigo de plaza: ";
								cin >> codigoDePlaza;
								// se crea el profesor con propiedad y se agrega a la lista de pacientes
								Paciente* profesorConPropiedad = new ConPropiedad(nombre, apellido, edad, universidad, cedula, titulo, aniosLaborados, codigoDePlaza);
								hospital->insertarPaciente(profesorConPropiedad);
							} else if (tienePropiedad == "no" || tienePropiedad == "No") {
								cout << "Digite la calificacion del profesor (1-10): ";
								cin >> calificacion;
								// se crea el profesor interino y se agrega a la lista de pacientes
								Paciente* profesorInterino = new Interino(nombre, apellido, edad, universidad, cedula, titulo, aniosLaborados, calificacion);
								hospital->insertarPaciente(profesorInterino);
							} else {
								cout << "Opcion invalida" << endl;
							}
						}
						else {
							cout << "Tipo de paciente invalido" << endl;
							pausarYLimpiar();
							break;
						}
						pausarYLimpiar();
						break;
					case 2:
						//Eliminar Paciente
						do {
							cout << "Digite el numero de cedula o de pasaporte del paciente a eliminar: ";
							cin >> identificacion;
							if (hospital->getListaDePacientes()->existePaciente(identificacion)) {
								hospital->getListaDePacientes()->eliminarPaciente(identificacion);
								cout << "Paciente eliminado" << endl;
								done = true;
							}
							else {
								cout << "El paciente no existe" << endl;
								pausarYLimpiar();
								cout << "Desea intentarlo de nuevo? (si/no): ";
								cin >> volverAIntentar;
								if (volverAIntentar == "si" || volverAIntentar == "Si") {
									done = false;
								}
								else if (volverAIntentar == "no" || volverAIntentar == "No") {
									done = true;
								}
								else {
									cout << "Opcion invalida" << endl;
									done = true;
								}
							}
						} while (!done);
						pausarYLimpiar();
						break;
					case 3:
						//Modificar Paciente
						do {
							cout << "Digite el numero de cedula o de pasaporte del paciente a modificar: ";
							cin >> identificacion;
							if (hospital->getListaDePacientes()->existePaciente(identificacion)) {
								if (hospital->getListaDePacientes()->buscarPaciente(identificacion)->getTipo() == "Nacional") {
									do {
										cout << menuEditarEstudianteNacional();
										cin >> opcionEditarPaciente;
										pausarYLimpiar();
										switch (opcionEditarPaciente) {
										case 1:
											cout << "Digite el nuevo nombre: ";
											cin >> nombre;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setNombre(nombre);
											cout << "Nombre modificado" << endl;
											break;
										case 2:
											cout << "Digite el nuevo apellido: ";
											cin >> apellido;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setApellido(apellido);
											cout << "Apellido modificado" << endl;
											break;
										case 3:
											cout << "Digite la nueva edad: ";
											cin >> edad;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setEdad(edad);
											cout << "Edad modificada" << endl;
											break;
										case 4:
											cout << "Digite la nueva universidad: ";
											cin >> universidad;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setUniversidad(universidad);
											cout << "Universidad modificada" << endl;
											break;
										case 5:
											cout << "Digite el nuevo codigo de carrera: ";
											cin >> codigoDeCarrera;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setCodigoDeCarrera(codigoDeCarrera);
											cout << "Codigo de carrera modificado" << endl;
											break;
										case 6:
											cout << "Digite el nuevo ultimo nivel cursado: ";
											cin >> ultNivelCursado;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setUltNivelCursado(ultNivelCursado);
											cout << "Ultimo nivel cursado modificado" << endl;
											break;
										case 7:
											cout << "Digite el nuevo numero de telefono: ";
											cin >> numeroDeTelefono;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setNumeroDeTelefono(numeroDeTelefono);
											cout << "Numero de telefono modificado" << endl;
											break;
										case 8:
											cout << "Digite el nuevo estado: ";
											cin >> estado;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setEstado(estado);
											cout << "Estado modificado" << endl;
											break;
										case 9:
											cout << "Regresando..." << endl;
											break;
										default:
											cout << "Opcion invalida" << endl;
											break;
										}
										pausarYLimpiar();
									} while (opcionEditarPaciente != 9);
								} else if (hospital->getListaDePacientes()->buscarPaciente(identificacion)->getTipo() == "Internacional") {
									do {
										cout << menuEditarEstudianteInternacional();
										cin >> opcionEditarPaciente;
										pausarYLimpiar();
										switch (opcionEditarPaciente) {
										case 1:
											cout << "Digite el nuevo nombre: ";
											cin >> nombre;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setNombre(nombre);
											cout << "Nombre modificado" << endl;
											break;
										case 2:
											cout << "Digite el nuevo apellido: ";
											cin >> apellido;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setApellido(apellido);
											cout << "Apellido modificado" << endl;
											break;
										case 3:
											cout << "Digite la nueva edad: ";
											cin >> edad;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setEdad(edad);
											cout << "Edad modificada" << endl;
											break;
										case 4:
											cout << "Digite la nueva universidad: ";
											cin >> universidad;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setUniversidad(universidad);
											cout << "Universidad modificada" << endl;
											break;
										case 5:
											cout << "Digite el nuevo codigo de carrera: ";
											cin >> codigoDeCarrera;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setCodigoDeCarrera(codigoDeCarrera);
											cout << "Codigo de carrera modificado" << endl;
											break;
										case 6:
											cout << "Digite el nuevo ultimo nivel cursado: ";
											cin >> ultNivelCursado;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setUltNivelCursado(ultNivelCursado);
											cout << "Ultimo nivel cursado modificado" << endl;
											break;
										case 7:
											cout << "Digite el nuevo numero de telefono: ";
											cin >> numeroDeTelefono;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setNumeroDeTelefono(numeroDeTelefono);
											cout << "Numero de telefono modificado" << endl;
											break;
										case 8:
											cout << "Digite la nueva nacionalidad: ";
											cin >> nacionalidad;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setNacionalidad(nacionalidad);
											cout << "Nacionalidad modificada" << endl;
											break;
										case 9:
											cout << "Digite la nueva condicion: ";
											cin >> condicion;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setCondicion(condicion);
											cout << "Condicion modificada" << endl;
											break;
										case 10:
											cout << "Regresando..." << endl;
											break;
										default:
											cout << "Opcion invalida" << endl;
											break;
										}
										pausarYLimpiar();
									} while (opcionEditarPaciente != 10);
								}
								else if (hospital->getListaDePacientes()->buscarPaciente(identificacion)->getTipo() == "Con Propiedad") {
									do {
										cout << menuEditarPacienteProfesorConPropiedad();
										cin >> opcionEditarPaciente;
										pausarYLimpiar();
										switch (opcionEditarPaciente) {
										case 1:
											cout << "Digite el nuevo nombre: ";
											cin >> nombre;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setNombre(nombre);
											cout << "Nombre modificado" << endl;
											break;
										case 2:
											cout << "Digite el nuevo apellido: ";
											cin >> apellido;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setApellido(apellido);
											cout << "Apellido modificado" << endl;
											break;
										case 3:
											cout << "Digite la nueva edad: ";
											cin >> edad;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setEdad(edad);
											cout << "Edad modificada" << endl;
											break;
										case 4:
											cout << "Digite la nueva universidad: ";
											cin >> universidad;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setUniversidad(universidad);
											cout << "Universidad modificada" << endl;
											break;	
										case 5:
											cout << "Digite el nuevo titulo: ";
											cin >> titulo;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setTitulo(titulo);
											cout << "Titulo modificado" << endl;
											break;
										case 6:
											cout << "Digite los nuevos anios laborados: ";
											cin >> aniosLaborados;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setAniosLaborados(aniosLaborados);
											cout << "Anios laborados modificados" << endl;
											break;
										case 7:
											cout << "Digite el nuevo numero de propiedad: ";
											cin >> codigoDePlaza;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setCodigoDePlaza(codigoDePlaza);
											cout << "Numero de propiedad modificado" << endl;
											break;
										case 8:
											cout << "Regresando..." << endl;
											break;
										default:
											cout << "Opcion invalida" << endl;
											break;
										}
										pausarYLimpiar();
									} while (opcionEditarPaciente != 8);
								} else {
									do {
										cout << menuEditarPacienteProfesorInterino();
										cin >> opcionEditarPaciente;
										pausarYLimpiar();
										switch (opcionEditarPaciente) {
										case 1:
											cout << "Digite el nuevo nombre: ";
											cin >> nombre;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setNombre(nombre);
											cout << "Nombre modificado" << endl;
											break;
										case 2:
											cout << "Digite el nuevo apellido: ";
											cin >> apellido;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setApellido(apellido);
											cout << "Apellido modificado" << endl;
											break;
										case 3:
											cout << "Digite la nueva edad: ";
											cin >> edad;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setEdad(edad);
											cout << "Edad modificada" << endl;
											break;
										case 4:
											cout << "Digite la nueva universidad: ";
											cin >> universidad;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setUniversidad(universidad);
											cout << "Universidad modificada" << endl;
											break;
										case 5:
											cout << "Digite el nuevo titulo: ";
											cin >> titulo;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setTitulo(titulo);
											cout << "Titulo modificado" << endl;
											break;
										case 6:
											cout << "Digite los nuevos anios laborados: ";
											cin >> aniosLaborados;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setAniosLaborados(aniosLaborados);
											cout << "Anios laborados modificados" << endl;
											break;
										case 7:
											cout << "Digite la nueva calificacion: ";
											cin >> calificacion;
											hospital->getListaDePacientes()->buscarPaciente(identificacion)->setCalificacion(calificacion);
											cout << "Calificacion modificada" << endl;
											break;
										case 8:
											cout << "Regresando..." << endl;
											break;
										default:
											cout << "Opcion invalida" << endl;
											break;
										}		
									} while (opcionEditarPaciente != 8);
								}
								done = true;
							} else {
								cout << "El paciente no existe" << endl;
								pausarYLimpiar();
								cout << "Desea intentarlo de nuevo? (si/no): ";
								cin >> volverAIntentar;
								if (volverAIntentar == "si" || volverAIntentar == "Si") {
									done = false;
								}
								else if (volverAIntentar == "no" || volverAIntentar == "No") {
									done = true;
								}
								else {
									cout << "Opcion invalida" << endl;
									done = true;
								}
							}
						} while (!done);
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
						//Agregar medico
						//(string nombre, string apellido, int edad, string cedula, string especialidad, string numTelefonico
						cout << "AGREGAR MEDICO" << endl;
						cout << "Digite el nombre: ";
						cin >> nombre;
						cout << "Digite el apellido: ";
						cin >> apellido;
						cout << "Digite la edad: ";
						cin >> edad;
						cout << "Digite la cedula: ";
						cin >> cedula;
						cout << "Digite la especialidad: ";
						cin >> especialidad;
						cout << "Digite el numero telefonico: ";
						cin >> numeroDeTelefono;
						hospital->insertarMedico(new Medico(nombre, apellido, edad, cedula, especialidad, numeroDeTelefono));
						cout << "MEDICO AGREGADO" << endl;
						pausarYLimpiar();
						break;
					case 2:
						//Eliminar Medico
						do {
							cout << "Digite el numero de cedula del medico a eliminar: ";
							cin >> identificacion;
							if (hospital->getListaDeMedicos()->existeMedico(identificacion)) {
								hospital->getListaDeMedicos()->eliminarMedico(identificacion);
								cout << "Medico eliminado eliminado" << endl;
								done = true;
							}
							else {
								cout << "El medico no existe" << endl;
								pausarYLimpiar();
								cout << "Desea intentarlo de nuevo? (si/no): ";
								cin >> volverAIntentar;
								if (volverAIntentar == "si" || volverAIntentar == "Si") {
									done = false;
								}
								else if (volverAIntentar == "no" || volverAIntentar == "No") {
									done = true;
								}
								else {
									cout << "Opcion invalida" << endl;
									done = true;
								}
							}
						} while (!done);
						pausarYLimpiar();
						break;
					case 3:
						//Modificar Medico
						do {
							cout << "Digite el numero de cedula o de pasaporte del paciente a eliminar: ";
							cin >> identificacion;
							if (hospital->getListaDeMedicos()->existeMedico(identificacion)) {
								done = true;
							}
							else {
								cout << "El medico no existe" << endl;
								pausarYLimpiar();
								cout << "Desea intentarlo de nuevo? (si/no): ";
								cin >> volverAIntentar;
								if (volverAIntentar == "si" || volverAIntentar == "Si") {
									done = false;
								}
								else if (volverAIntentar == "no" || volverAIntentar == "No") {
									done = true;
								}
								else {
									cout << "Opcion invalida" << endl;
									done = true;
								}
							}
						} while (!done);
						do {
							cout << menuEditarMedico();
							cin >> opcionEditarMedico;
							pausarYLimpiar();
							switch (opcionEditarMedico) {
							case 1:
								//Editar nombre
								cout << "Digite el nuevo nombre: ";
								cin >> nombre;
								hospital->getListaDeMedicos()->buscarMedico(identificacion)->setNombre(nombre);
								cout << "Nombre editado" << endl;
								break;
							case 2:
								//Editar apellido
								cout << "Digite el nuevo apellido: ";
								cin >> apellido;
								hospital->getListaDeMedicos()->buscarMedico(identificacion)->setApellido(apellido);
								cout << "Apellido editado" << endl;
								break;
							case 3:
								//Editar edad
								cout << "Digite la nueva edad: ";
								cin >> edad;
								hospital->getListaDeMedicos()->buscarMedico(identificacion)->setEdad(edad);
								cout << "Edad editada" << endl;
								break;
							case 4:
								cout << "Digite la nueva especialidad: ";
								cin >> especialidad;
								hospital->getListaDeMedicos()->buscarMedico(identificacion)->setEspecialidad(especialidad);
								cout << "Especialidad editada" << endl;
								break;
							case 5:
								cout << "Digite el nuevo numero telefonico: ";
								cin >> cedula;
								hospital->getListaDeMedicos()->buscarMedico(identificacion)->setNumTelefonico(cedula);
								cout << "Numero telefonico editado" << endl;
								break;
							case 6:
								cout << "Regresando..." << endl;
								break;
							default:
								cout << "Opcion invalida" << endl;
								break;
							}
							pausarYLimpiar();
						} while (opcionEditarMedico != 6);
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
						do {
							//verificar que no exista otra ambulancia con la misma placa
							cout << "Digite la placa: ";
							cin >> placa;
							if (hospital->getListaDeTransportes()->existeTransporte(placa)) {
								cout << "Ya existe una vehiculo con esa placa" << endl;
								pausarYLimpiar();
								cout << "Desea intentarlo de nuevo? (si/no): ";
								cin >> volverAIntentar;
								if (volverAIntentar == "si" || volverAIntentar == "Si") {
									done = false;
								}
								else if (volverAIntentar == "no" || volverAIntentar == "No") {
									done = true;
								}
								else {
									cout << "Opcion invalida" << endl;
									done = true;
								}
							}
							else {
								done = true;
							}
						} while (!done);
						cout << "Digite la marca: ";
						cin >> marca;
						do {
							cout << "Digite el codigo de la ambulancia: ";
							cin >> codigo;
							if (hospital->getListaDeTransportes()->existeAmbulancia(codigo)) {
								cout << "Ya existe una ambulancia con ese codigo" << endl;
								pausarYLimpiar();
								cout << "Desea intentarlo de nuevo? (si/no): ";
								cin >> volverAIntentar;
								if (volverAIntentar == "si" || volverAIntentar == "Si") {
									done = false;
								}
								else if (volverAIntentar == "no" || volverAIntentar == "No") {
									done = true;
								}
								else {
									cout << "Opcion invalida" << endl;
									done = true;
								}
							}
							else {
								done = true;
							}
						} while (!done);
						hospital->getListaDeTransportes()->insertarTransporte(new Ambulancia(placa, marca, 0, codigo, false));
						cout << "Ambulancia agregada" << endl;
						pausarYLimpiar();
						break;
					case 2:
						//Eliminar Ambulancia
						cout << "Digite la placa de la ambulancia a eliminar: ";
						cin >> placa;
						if (hospital->getListaDeTransportes()->existeTransporte(placa)) {
							hospital->getListaDeTransportes()->eliminarTransporte(placa);
							cout << "Ambulancia eliminada" << endl;
						}
						else {
							cout << "No existe una ambulancia con esa placa" << endl;
						}
						pausarYLimpiar();
						break;
					case 3:
						//Modificar Ambulancia
						cout << "Digite la placa de la ambulancia a modificar: ";
						cin >> placa;
						if (hospital->getListaDeTransportes()->existeTransporte(placa) && hospital->getListaDeTransportes()->getTransporte(placa)->getTipo() == "Ambulancia") {
							do {
								cout << menuEditarAmbulancia();
								cin >> opcionEditarAmbulancia;
								//ss << "1) Numero de placa" << endl;
								//ss << "2) Marca" << endl;
								//ss << "3) Codigo" << endl;
								switch (opcionEditarAmbulancia) {
								case 1:
									do {
										cout << "Digite la nueva placa: ";
										cin >> placaNueva;
										if (hospital->getListaDeTransportes()->existeTransporte(placaNueva)) {
											cout << "Ya existe una vehiculo con esa placa" << endl;
											pausarYLimpiar();
											cout << "Desea intentarlo de nuevo? (si/no): ";
											cin >> volverAIntentar;
											if (volverAIntentar == "si" || volverAIntentar == "Si") {
												done = false;
											}
											else if (volverAIntentar == "no" || volverAIntentar == "No") {
												done = true;
											}
											else {
												cout << "Opcion invalida" << endl;
												done = true;
											}
										} else {
											hospital->getListaDeTransportes()->getTransporte(placa)->setPlaca(placaNueva);
											done = true;
										}
									} while (!done);
									pausarYLimpiar();
									break;
								case 2:
									cout << "Digite la nueva marca: ";
									cin >> marca;
									hospital->getListaDeTransportes()->getTransporte(placa)->setMarca(marca);
									pausarYLimpiar();
									break;
								case 3:
									do {
										cout << "Digite el nuevo codigo: ";
										cin >> codigo;
										if (hospital->getListaDeTransportes()->existeAmbulancia(codigo)) {
											cout << "Ya existe una ambulancia con ese codigo" << endl;
											pausarYLimpiar();
											cout << "Desea intentarlo de nuevo? (si/no): ";
											cin >> volverAIntentar;
											if (volverAIntentar == "si" || volverAIntentar == "Si") {
												done = false;
											}
											else if (volverAIntentar == "no" || volverAIntentar == "No") {
												done = true;
											}
											else {
												cout << "Opcion invalida" << endl;
												done = true;
											}
										} else {
											hospital->getListaDeTransportes()->getTransporte(placa)->setCodigo(codigo);
											done = true;
										}
									} while (!done);
									pausarYLimpiar();
									break;
								case 4:
									cout << "Regresando..." << endl;
									pausarYLimpiar();
									break;
								default:
									cout << "Opcion invalida" << endl;
									pausarYLimpiar();
									break;
								}
							} while (opcionEditarAmbulancia != 4);
						}
						else {
							cout << "No existe una ambulancia con esa placa" << endl;
						}
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
						//string placa, string marca, double kilometrosRecorridos, int numeroDePasajeros
						do {
							cout << "Digite la placa: ";
							cin >> placa;
							if (hospital->getListaDeTransportes()->existeTransporte(placa)) {
								cout << "Ya existe un vehiculo con esa placa" << endl;
								pausarYLimpiar();
								cout << "Desea intentarlo de nuevo? (si/no): ";
								cin >> volverAIntentar;
								if (volverAIntentar == "si" || volverAIntentar == "Si") {
									done = false;
								}
								else if (volverAIntentar == "no" || volverAIntentar == "No") {
									done = true;
								}
								else {
									cout << "Opcion invalida" << endl;
									done = true;
								}
							}
							else {
								done = true;
							}
						} while (!done);
						cout << "Digite la marca: ";
						cin >> marca;
						hospital->getListaDeTransportes()->insertarTransporte(new Taxi(placa, marca));
						pausarYLimpiar();
						break;
					case 2:
						//Eliminar Taxi
						cout << "Digite la placa del taxi a eliminar: ";
						cin >> placa;
						if (hospital->getListaDeTransportes()->existeTransporte(placa) && hospital->getListaDeTransportes()->getTransporte(placa)->getTipo() == "Taxi") {
							hospital->getListaDeTransportes()->eliminarTransporte(placa);
							cout << "Taxi eliminado" << endl;
						}
						else {
							cout << "No existe un taxi con esa placa" << endl;
						}
						pausarYLimpiar();
						break;
					case 3:
						//Modificar Taxi
						cout << "Digite la placa del taxi a modificar: ";
						cin >> placa;
						if (hospital->getListaDeTransportes()->existeTransporte(placa) && hospital->getListaDeTransportes()->getTransporte(placa)->getTipo() == "Taxi") {
							do {
								cout << menuEditarTaxi();
								cin >> opcionEditarTaxi;
								pausarYLimpiar();
								switch (opcionEditarTaxi) {
								case 1:
									//Modificar placa
									do {
										cout << "Digite la nueva placa: ";
										cin >> placaNueva;
										if (hospital->getListaDeTransportes()->existeTransporte(placaNueva)) {
											cout << "Ya existe una vehiculo con esa placa" << endl;
											pausarYLimpiar();
											cout << "Desea intentarlo de nuevo? (si/no): ";
											cin >> volverAIntentar;
											if (volverAIntentar == "si" || volverAIntentar == "Si") {
												done = false;
											}
											else if (volverAIntentar == "no" || volverAIntentar == "No") {
												done = true;
											}
											else {
												cout << "Opcion invalida" << endl;
												done = true;
											}
										}
										else {
											hospital->getListaDeTransportes()->getTransporte(placa)->setPlaca(placaNueva);
											done = true;
										}
									} while (!done);
									break;
								case 2:
									//Modificar marca
									cout << "Digite la nueva marca: ";
									cin >> marca;
									hospital->getListaDeTransportes()->getTransporte(placa)->setMarca(marca);
									break;
								case 3:
									//Modificar kilometros recorridos
									cout << "Digite los nuevos kilometros recorridos: ";
									cin >> kilometrosRecorridos;
									hospital->getListaDeTransportes()->getTransporte(placa)->setKilometrosRecorridos(kilometrosRecorridos);
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
							} while (opcionEditarTaxi != 4);
						}
						else {
							cout << "No existe un taxi con esa placa" << endl;
							pausarYLimpiar();
						}
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
			do {
				cout << menuBusquedas();
				cin >> opcionBusquedas;
				std::system("cls");
				switch (opcionBusquedas) {
				case 1:
					//Mostrar todos los pacientes
					cout << hospital->getListaDePacientes()->mostrarPacientes();
					pausarYLimpiar();
					break;
				case 2:
					//Mostrar todos los medicos
					cout << hospital->getListaDeMedicos()->mostrarMedicos();
					pausarYLimpiar();
					break;
				case 3:
					//Mostrar todos los transportes
					cout << hospital->getListaDeTransportes()->mostrarTransportes();
					pausarYLimpiar();
					break;
				case 4:
					//Buscar elemento especifico
					cout << "TEST OPCION 4 SUBMENU 3" << endl;
					pausarYLimpiar();
					break;
				case 5:
					//Regresar
					cout << "REGRESANDO..." << endl;
					pausarYLimpiar();
					break;
				}
			} while (opcionBusquedas != 5);
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
					//ss << "3) Reporte de la persona que ha realizado m�s citas en el hospital." << endl;
					//ss << "4) Reportar la fecha en que han asistido mayor n�mero de pacientes." << endl;
					//ss << "5) Reportar el tipo de transporte m�s utilizado por los paciente (propio, taxi, ambulancia)" << endl;
					//ss << "6) Reportar lista de ambulancias que se encuentran �ocupadas�." << endl;
					//ss << "7) Reportar lista de tres profesores interinos con la mejor calificaci�n." << endl;
					//ss << "8) Reportar lista de todos los estudiantes internacionales que tengan condici�n de exiliado" << endl;
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
					//Persona que ha realizado m�s citas
					cout << "TEST OPCION 3 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 4:
					//Fecha en que han asistido mayor n�mero de pacientes
					cout << "TEST OPCION 4 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 5:
					//Tipo de transporte m�s utilizado por los pacientes
					cout << "TEST OPCION 5 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 6:
					//Lista de ambulancias ocupadas
					cout << "TEST OPCION 6 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 7:
					//Lista de tres profesores interinos con la mejor calificaci�n
					cout << "TEST OPCION 7 SUBMENU 4" << endl;
					pausarYLimpiar();
					break;
				case 8:
					//Lista de todos los estudiantes internacionales que tengan condici�n de exiliado
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

	cout << hospital->getListaDePacientes()->mostrarPacientes();
	cout << endl << endl << "MEDICOS" << endl << endl;
	//cout << hospital->getListaDeMedicos()->buscarMedico("1123")->toString();
	cout << hospital->getListaDeMedicos()->mostrarMedicos();

	system("pause");
	return 0;
}