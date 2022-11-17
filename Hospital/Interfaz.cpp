#include "Interfaz.h"

SaludUni* Interfaz::hospital = new SaludUni("CCSS0011", "2639-2121", "Alajuelita", "Hospital Universitario");

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

int Interfaz::menuCita()
{
	int opcion = 0;
	cout << "1) Agregar cita" << endl;
	cout << "2) Buscar cita" << endl;
	cout << "3) Eliminar cita" << endl;
	cout << "4) Mostrar citas de un paciente" << endl;
	cout << "5) Mostrar todas las citas" << endl;
	cout << "6) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}





int Interfaz::menuMantenimientoMedicos()
{
	int opcion = 0;
	cout << "1) Agregar Medico" << endl;
	cout << "2) Eliminar Medico" << endl;
	cout << "3) Modificar Medico" << endl;
	cout << "4) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

int Interfaz::menuEditarMedico()
{
	int opcion = 0;
	cout << "1) Nombre" << endl;
	cout << "2) Apellido" << endl;
	cout << "3) Edad" << endl;
	cout << "4) Especialidad" << endl;
	cout << "5) Numero telefonico" << endl;
	cout << "6) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

int Interfaz::menuMantenimientoAmbulancias()
{
	int opcion = 0;
	cout << "1) Agregar Ambulancia" << endl;
	cout << "2) Eliminar Ambulancia" << endl;
	cout << "3) Modificar Ambulancia" << endl;
	cout << "4) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

int Interfaz::menuEditarAmbulancia()
{
	int opcion = 0;
	cout << "1) Numero de placa" << endl;
	cout << "2) Marca" << endl;
	cout << "3) Codigo" << endl;
	cout << "4) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::regresar()
{
	cout << "Regresando..." << endl;
	pausarYLimpiar();
}

void Interfaz::opcionInvalida()
{
	cout << "Opcion invalida" << endl;
	pausarYLimpiar();
}
void Interfaz::salir()
{
	cout << "Saliendo..." << endl;
	pausarYLimpiar();
}
//menu cita
void Interfaz::agregarCita()
{
	Paciente* paciente = NULL;
	Medico* medico = NULL;
	Transporte* transporte = NULL;
	Fecha* fechaCita = NULL;
	Hora* horaCita = NULL;
	//datos necesarios
	//paciente
	string identificacion = ""; //puede ser la cedula o el pasaporte
	//por si ocupa transporte
	string placa = "";
	string necesitaTransporte = "";
	string tipoTransporte = "";
	double kilometrosRecorridos = 0.0;
	string tipoDeViaje = "";
	int numeroDePasajeros = 0;
	//fecha
	int dia = 0;
	int mes = 0;
	int anio = 0;
	//hora
	int hora = 0;
	int minutos = 0;
	int segundos = 0;
	//miscelaneos 
	bool done = false;
	string especialidad = ""; //especialidad del doctor

	do {
		cout << "Digite la cedula del paciente: ";
		cin >> identificacion;
		if (hospital->getListaDePacientes()->existePaciente(identificacion)) {
			paciente = hospital->getListaDePacientes()->buscarPaciente(identificacion);
			done = true;
		}
		else {
			cout << "El paciente " << identificacion << " no esta registrado en el sistema" << endl;
			cout << "Intente con una identificacion diferente" << endl;
			pausarYLimpiar();
			done = false;
		}
	} while (!done);

	cout << "Digite la especializacion del medico: ";
	cin >> especialidad;
	if (hospital->getListaDeMedicos()->buscarMedicoPorEspecializacion(especialidad) != NULL) {
		medico = hospital->getListaDeMedicos()->buscarMedicoPorEspecializacion(especialidad);
	}
	else {
		cout << "Actualmente no contamos con esa especialidad, entonces"
			<< "se le asignara un medico general" << endl;
		medico = hospital->getListaDeMedicos()->buscarMedicoPorEspecializacion("General");
	}

	do {
		cout << "Digite la fecha de la cita (dd/mm/aaaa): " << endl;
		cout << "Dia: ";
		cin >> dia;
		cout << "Mes: ";
		cin >> mes;
		cout << "Anio: ";
		cin >> anio;
		fechaCita = new Fecha(dia, mes, anio);
		cout << "Digite la hora de la cita (hh:mm:ss): " << endl;
		cout << "Hora: ";
		cin >> hora;
		cout << "Minutos: ";
		cin >> minutos;
		cout << "Segundos: ";
		cin >> segundos;
		horaCita = new Hora(hora, minutos, segundos);

		if (hospital->getListaDeCitas()->elPacienteYaTieneOtraCitaAlMismoTiempo(paciente, fechaCita, horaCita)) {
			cout << "El paciente ya tiene una cita en esa fecha y hora" << endl;
			cout << "Intente con una fecha diferente" << endl;
			done = false;
			pausarYLimpiar();
		}
		else {
			done = true;
		}
		if (hospital->getListaDeCitas()->elMedicoYaTieneOtraCitaAlMismoTiempo(medico, fechaCita, horaCita) && done) {
			cout << "El/La medico(a) ya tiene una cita en esa fecha y hora" << endl;
			cout << "Intente con una fecha diferente" << endl;
			done = false;
			pausarYLimpiar();
		}
		else {
			done = true;
		}
	} while (!done);

	cout << "Necesita transporte? (Si/No): ";
	cin >> necesitaTransporte;
	if (necesitaTransporte == "si" || necesitaTransporte == "Si") {
		cout << "Que tipo de transporte necesita? (Ambulancia/Taxi): ";
		cin >> tipoTransporte;
		if (tipoTransporte == "Ambulancia" || tipoTransporte == "ambulancia") {
			do {
				cout << "Digite la placa de la ambulancia: ";
				cin >> placa;
				if (hospital->getListaDeTransportes()->existeTransporte(placa) && hospital->getListaDeTransportes()->getTransporte(placa)->getTipo() == "Ambulancia") {
					transporte = hospital->getListaDeTransportes()->getTransporte(placa);
					transporte->setOcupado(true);
					done = true;
				}
				else {
					cout << "No existe una ambulancia con esa placa" << endl;
					cout << "Intente con una placa diferente" << endl;
					pausarYLimpiar();
				}
			} while (!done);
			cout << "Ingrese el tipo de viaje (ida / ida y vuelta / vuelta): ";
			getline(cin >> ws, tipoDeViaje);
			cout << "Ingrese los kilometros totales que se deben recorrer: ";
			cin >> kilometrosRecorridos;
			transporte->setKilometrosRecorridos(kilometrosRecorridos);
			if (paciente != NULL) {
				cout << paciente->toString();
			}
			else {
				cout << "No hay" << endl;
			}
			if (medico != NULL) {
				cout << medico->toString();
			}
			else {
				cout << "No hay" << endl;
			}
			if (transporte != NULL) {
				cout << transporte->toString();
			}
			else {
				cout << "No hay" << endl;
			}
			if (fechaCita != NULL) {
				cout << fechaCita->toString();
			}
			else {
				cout << "No hay" << endl;
			}
			if (horaCita != NULL) {
				cout << horaCita->toString();
			}
			else {
				cout << "No hay" << endl;
			}
			cout << "Tipo de viaje" << endl;
			hospital->insertarCita(new Cita(paciente, medico, fechaCita, horaCita, transporte, tipoDeViaje));
		}
		else if (tipoTransporte == "Taxi" || tipoTransporte == "taxi") {
			do {
				cout << "Digite la placa del taxi: ";
				cin >> placa;
				if (hospital->getListaDeTransportes()->existeTransporte(placa) && hospital->getListaDeTransportes()->getTransporte(placa)->getTipo() == "Taxi") {
					transporte = hospital->getListaDeTransportes()->getTransporte(placa);
					transporte->setOcupado(true);
					done = true;
				}
				else {
					cout << "No existe un taxi con esa placa" << endl;
					cout << "Intente con una placa diferente" << endl;
					pausarYLimpiar();
					done = false;
				}
			} while (!done);
			cout << "Ingrese el tipo de viaje (ida / ida y vuelta / vuelta): ";
			getline(cin >> ws, tipoDeViaje);
			cout << "Ingrese los kilometros totales que se deben recorrer: ";
			cin >> kilometrosRecorridos;
			cout << "Ingrese el numero de pasajeros: " << endl;
			cin >> numeroDePasajeros;
			transporte->setKilometrosRecorridos(kilometrosRecorridos);
			transporte->setNumeroDePasajeros(numeroDePasajeros);

			if (paciente != NULL) {
				cout << paciente->toString();
			}
			else {
				cout << "ERROR PACIENTE" << endl;
			}
			if (medico != NULL) {
				cout << medico->toString();
			}
			else {
				cout << "ERROR MEDICO" << endl;
			}
			if (transporte != NULL) {
				cout << transporte->toString();
			}
			else {
				cout << "ERROR TRASNPORTE" << endl;
			}
			if (fechaCita != NULL) {
				cout << fechaCita->toString();
			}
			else {
				cout << "ERROR FECHA" << endl;
			}
			if (horaCita != NULL) {
				cout << horaCita->toString();
			}
			else {
				cout << "ERROR HORA" << endl;
			}
			cout << "Tipo de viaje" << tipoDeViaje << endl;
			hospital->insertarCita(new Cita(paciente, medico, fechaCita, horaCita, transporte, tipoDeViaje));
		}
		else {
			cout << "Opcion invalida" << endl;
		}
	}
	else if (necesitaTransporte == "no" || necesitaTransporte == "No") {
		hospital->insertarCita(new Cita(paciente, medico, fechaCita, horaCita));
	}
	else {
		cout << "Opcion invalida" << endl;
	}
}

void Interfaz::buscarCita()
{
	string codigoCita = "";
	cout << "Ingrese el codigo de la cita: ";
	cin >> codigoCita;
	if (hospital->getListaDeCitas()->existeCita(codigoCita)) {
		cout << hospital->mostrarCita(codigoCita);
	}
	else {
		cout << "La cita no existe" << endl;
	}
	pausarYLimpiar();
}

void Interfaz::eliminarCita()
{
	string codigoCita = "";
	cout << "Ingrese el codigo de la cita: ";
	cin >> codigoCita;
	if (hospital->getListaDeCitas()->existeCita(codigoCita)) {
		hospital->getListaDeCitas()->eliminarCita(codigoCita);
		cout << "Cita eliminada" << endl;
	}
	else {
		cout << "La cita no existe" << endl;
	}
}

void Interfaz::mostrarCitasDeUnPaciente()
{
	string identificacion = "";
	cout << "Ingrese la identificacion del paciente: ";
	cin >> identificacion;
	if (hospital->getListaDePacientes()->existePaciente(identificacion)) {
		cout << hospital->getListaDeCitas()->mostarCitasDeUnPaciente(identificacion);
	}
	else {
		cout << "El paciente no esta registrado en el sistema" << endl;
	}
	pausarYLimpiar();
}

void Interfaz::mostrarTodasLasCitasDelHospital()
{
	cout << hospital->getListaDeCitas()->mostrarCitas();
	pausarYLimpiar();
}
//mantenimiento pacientes
//main
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
//pacientes
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
//auxiliares
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

int Interfaz::menuEditarEstudianteInternacional()
{
	int opcion = 0;
	menuEditarPaciente();
	cout << "5) Codigo de carrera" << endl;
	cout << "6) Ultimo nivel cursado" << endl;
	cout << "7) Numero de telefono" << endl;
	cout << "8) Nacionalidad" << endl;
	cout << "9) Condicion" << endl;
	cout << "10) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

int Interfaz::menuEditarPacienteProfesorConPropiedad()
{
	int opcion = 0;
	menuEditarPaciente();
	cout << "5) Titulo" << endl;
	cout << "6) Anios laborados" << endl;
	cout << "7) Numero de propiedad" << endl;
	cout << "8) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

int Interfaz::menuEditarPacienteProfesorInterino()
{
	int opcion = 0;
	menuEditarPaciente();
	cout << "5) Titulo" << endl;
	cout << "6) Anios laborados" << endl;
	cout << "7) Calificacion" << endl;
	cout << "8) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}
//
void Interfaz::agregarPaciente()
{
	string nombre = "";
	string apellido = "";
	string universidad = "";
	string tipo = "";
	string codigoDeCarrera = "";
	string ultNivelCursado = "";
	string numeroDeTelefono = "";
	string esNacional = "";
	string cedula = "";
	string nacionalidad = "";
	string pasaporte = "";
	string titulo = "";
	string tienePropiedad = "";
	string condicion = "";
	double calificacion = 0;
	string codigoDePlaza = "";
	int aniosLaborados = 0;
	int edad = 0;
	bool done = false;
	string estado = "";

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
					cout << "Intente con un numero de cedula diferente" << endl;
					pausarYLimpiar();
					done = false;
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
		}
		else if (esNacional == "no" || esNacional == "No") {
			cout << "Digite la nacionalidad: ";
			cin >> nacionalidad;
			do {
				cout << "Digite el numero de pasaporte: ";
				cin >> pasaporte;
				if (hospital->getListaDePacientes()->existePaciente(pasaporte)) {
					cout << "El paciente ya existe" << endl;
					pausarYLimpiar();
					cout << "Intente con un numero de pasaporte diferente" << endl;
					pausarYLimpiar();
					done = false;
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
		}
		else {
			cout << "Opcion invalida" << endl;
		}
	}
	else if (tipo == "profesor") {
		do {
			cout << "Digite el numero de cedula: ";
			cin >> cedula;
			if (hospital->getListaDePacientes()->existePaciente(cedula)) {
				cout << "El paciente ya existe" << endl;
				pausarYLimpiar();
				cout << "Intente con un numero de cedula diferente" << endl;
				pausarYLimpiar();
				done = false;
			}
			else {
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
		}
		else if (tienePropiedad == "no" || tienePropiedad == "No") {
			cout << "Digite la calificacion del profesor (1-10): ";
			cin >> calificacion;
			// se crea el profesor interino y se agrega a la lista de pacientes
			Paciente* profesorInterino = new Interino(nombre, apellido, edad, universidad, cedula, titulo, aniosLaborados, calificacion);
			hospital->insertarPaciente(profesorInterino);
		}
		else {
			cout << "Opcion invalida" << endl;
		}
	}
	else {
		cout << "Tipo de paciente invalido" << endl;
		pausarYLimpiar();
	}
}

void Interfaz::eliminarPaciente()
{
	string identificacion, volverAIntentar = "";
	bool done = false;
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
}

void Interfaz::modificarPaciente()
{
	string identificacion = "";
	string nombre = "";
	string apellido = "";
	int edad = 0;
	string universidad = "";
	string codigoDeCarrera = "";
	string ultNivelCursado = "";
	string numeroDeTelefono = "";
	string estado = "";
	string nacionalidad = "";
	string condicion = "";
	string titulo = "";
	string codigoDePlaza = "";
	string volverAIntentar = "";
	double calificacion = 0.0;
	int aniosLaborados = 0;
	bool done = false;
	int opcionEditarPaciente = 0;
	do {
		cout << "Digite el numero de cedula o de pasaporte del paciente a modificar: ";
		cin >> identificacion;
		if (hospital->getListaDePacientes()->existePaciente(identificacion)) {
			if (hospital->getListaDePacientes()->buscarPaciente(identificacion)->getTipo() == "Nacional") {
				do {
					opcionEditarPaciente = menuEditarEstudianteNacional();
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
			}
			else if (hospital->getListaDePacientes()->buscarPaciente(identificacion)->getTipo() == "Internacional") {
				do {
					opcionEditarPaciente = menuEditarEstudianteInternacional();
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
					opcionEditarPaciente = menuEditarPacienteProfesorConPropiedad();
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
			}
			else {
				do {
					opcionEditarPaciente = menuEditarPacienteProfesorInterino();
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
}
//mantenimiento medicos
void Interfaz::agregarMedico()
{
	string nombre, apellido, universidad, cedula, especialidad, numeroDeTelefono = "";
	int edad = 0;
	bool done = false;
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

	do {
		cout << "Digite la cedula: ";
		cin >> cedula;
		if (hospital->getListaDeMedicos()->buscarMedico(cedula) == NULL) {
			hospital->getListaDeMedicos()->insertarMedico(new Medico(nombre, apellido, edad, cedula, especialidad, numeroDeTelefono));
			cout << "Medico agregado" << endl;
			done = true;
		}
		else {
			cout << "Ya existe un medico con esa cedula registrado en el sistema" << endl;
			pausarYLimpiar();
			cout << "Intente con un numero de cedula diferente" << endl;
			pausarYLimpiar();
			done = false;
		}
	} while (!done);
	pausarYLimpiar();
}

void Interfaz::eliminarMedico()
{
	string identificacion, volverAIntentar = "";
	bool done = false;
	do {
		cout << "Digite el numero de cedula del medico a eliminar: ";
		cin >> identificacion;
		if (hospital->getListaDeMedicos()->existeMedico(identificacion)) {
			hospital->getListaDeMedicos()->eliminarMedico(identificacion);
			cout << "Medico eliminado" << endl;
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
}

void Interfaz::modificarMedico()
{
	int opcionEditarMedico = 0;
	int edad = 0;
	bool done = false;
	string identificacion, nombre, apellido, universidad, especialidad, volverAIntentar, numeroDeTelefono = "";
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
		opcionEditarMedico = menuEditarMedico();
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
			cin >> numeroDeTelefono;
			hospital->getListaDeMedicos()->buscarMedico(identificacion)->setNumTelefonico(numeroDeTelefono);
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
}

void Interfaz::agregarAmbulancia()
{
	string placa, codigo, marca = "";
	bool done = false;
	do {
		//verificar que no exista otra ambulancia con la misma placa
		cout << "Digite la placa: ";
		cin >> placa;
		if (hospital->getListaDeTransportes()->existeTransporte(placa)) {
			cout << "Ya existe una vehiculo con esa placa" << endl;
			pausarYLimpiar();
			cout << "Intente con una placa diferente" << endl;
			pausarYLimpiar();
			done = false;
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
			cout << "Intente con un codigo diferente" << endl;
			pausarYLimpiar();
			done = false;
		}
		else {
			done = true;
		}
	} while (!done);
	hospital->getListaDeTransportes()->insertarTransporte(new Ambulancia(placa, marca, 0, codigo, false));
	cout << "Ambulancia agregada" << endl;
	pausarYLimpiar();
}

void Interfaz::eliminarAmbulancia()
{
	string placa, volverAIntentar = "";
	bool done = false;
	do {
		cout << "Digite la placa de la ambulancia a eliminar: ";
		cin >> placa;
		if (hospital->getListaDeTransportes()->existeTransporte(placa)) {
			hospital->getListaDeTransportes()->eliminarTransporte(placa);
			cout << "Ambulancia eliminada" << endl;
			done = true;
		}
		else {
			cout << "La ambulancia placa" << placa << " no esta registrada en el sistema" << endl;
			cout << "Desea intentarlo de nuevo? (si/no): ";
			pausarYLimpiar();
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
}

void Interfaz::modificarAmbulancia()
{
	int opcionEditarAmbulancia = 0;
	string placa, placaNueva, volverAIntentar, marca, codigo = "";
	bool done = false;
	cout << "Digite la placa de la ambulancia a modificar: ";
	cin >> placa;
	if (hospital->getListaDeTransportes()->existeTransporte(placa) && hospital->getListaDeTransportes()->getTransporte(placa)->getTipo() == "Ambulancia") {
		do {
			opcionEditarAmbulancia = menuEditarAmbulancia();
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
					}
					else {
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
					}
					else {
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
}
//matenimineto de taxis

int Interfaz::menuMantenimientoTaxis()
{
	int opcion = 0;
	cout << "1) Agregar Taxi" << endl;
	cout << "2) Eliminar Taxi" << endl;
	cout << "3) Modificar Taxi" << endl;
	cout << "4) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

int Interfaz::menuEditarTaxi()
{
	int opcion = 0;
	cout << "1) Numero de placa" << endl;
	cout << "2) Marca" << endl;
	cout << "3) Codigo" << endl;
	cout << "4) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::agregarTaxi()
{
	string placa, marca, volverAIntentar = "";
	bool done = false;
	do {
		cout << "Digite el numero de placa: ";
		cin >> placa;
		if (hospital->getListaDeTransportes()->existeTransporte(placa)) {
			cout << "Ya existe un vehiculo con esa placa" << endl;
			pausarYLimpiar();
			cout << "Intente con una placa diferente" << endl;
			pausarYLimpiar();
			done = false;
		}
		else {
			done = true;
		}
	} while (!done);
	cout << "Digite la marca: ";
	cin >> marca;
	hospital->getListaDeTransportes()->insertarTransporte(new Taxi(placa, marca));
	pausarYLimpiar();
}

void Interfaz::eliminarTaxi()
{
	string placa;
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
}

void Interfaz::modificarTaxi()
{
	string placa, placaNueva, volverAIntentar, marca = "";
	double kilometrosRecorridos = 0;
	int opcionEditarTaxi = 0;
	bool done = false;
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
}

int Interfaz::menuBusquedas()
{
	int opcion = 0;
	cout << "1) Mostrar Pacientes" << endl;
	cout << "2) Mostrar Medicos" << endl;
	cout << "3) Mostrar Transportes" << endl;
	cout << "4) Buscar Elemento Especifico" << endl;
	cout << "5) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::mostrarTodosLosPacientes()
{
	cout << hospital->getListaDePacientes()->mostrarPacientes();
	pausarYLimpiar();
}

void Interfaz::mostrarTodosLosMedicos()
{
	cout << hospital->getListaDeMedicos()->mostrarMedicos();
	pausarYLimpiar();
}

void Interfaz::mostrarTodosLosTransportes()
{
	cout << hospital->getListaDeTransportes()->mostrarTransportes();
	pausarYLimpiar();
}

//busquedas
int Interfaz::menuBusquedasEspecifica()
{
	int opcion = 0;
	cout << "1) Buscar Estudiante" << endl;
	cout << "2) Buscar Profesor" << endl;
	cout << "3) Buscar Medico" << endl;
	cout << "4) Buscar Ambulancia" << endl;
	cout << "5) Buscar Taxi" << endl;
	cout << "6) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::buscarEstudiante()
{
	string identificacion = "";
	cout << "Digite la identificacion del estudiante: ";
	cin >> identificacion;
	if (hospital->getListaDePacientes()->existePaciente(identificacion)) {
		cout << hospital->getListaDePacientes()->buscarPaciente(identificacion)->toString() << endl;
	}
	else {
		cout << "No existe un paciente con esa identificacion" << endl;
	}
	pausarYLimpiar();
}

void Interfaz::buscarProfesor()
{
	string identificacion = "";
	cout << "Digite la identificacion del profesor: ";
	cin >> identificacion;
	if (hospital->getListaDePacientes()->existePaciente(identificacion)) {
		cout << hospital->getListaDePacientes()->buscarPaciente(identificacion)->toString() << endl;
	}
	else {
		cout << "No existe un medico con esa identificacion" << endl;
	}
	pausarYLimpiar();
}

void Interfaz::buscarMedico()
{
	string identificacion = "";
	cout << "Digite la identificacion del medico: ";
	cin >> identificacion;
	if (hospital->getListaDeMedicos()->existeMedico(identificacion)) {
		cout << hospital->getListaDeMedicos()->buscarMedico(identificacion)->toString() << endl;
	}
	else {
		cout << "No existe un medico con esa identificacion" << endl;
	}
	pausarYLimpiar();

}

void Interfaz::buscarAmbulancia()
{
	string codigo = "";
	cout << "Digite el codigo de la ambulancia: ";
	cin >> codigo;
	if (hospital->getListaDeTransportes()->existeTransporte(codigo)) {
		cout << hospital->getListaDeTransportes()->getAmbulancia(codigo)->toString() << endl;
	}
	else {
		cout << "No existe una ambulancia con ese codigos" << endl;
	}
}

void Interfaz::buscarTaxi()
{
	string placa = "";
	cout << "Digite la placa del taxi: ";
	cin >> placa;
	if (hospital->getListaDeTransportes()->existeTransporte(placa) && hospital->getListaDeTransportes()->getTransporte(placa)->getTipo() == "Taxi") {
		cout << hospital->getListaDeTransportes()->getTransporte(placa)->toString() << endl;
	}
	else {
		cout << "No existe un taxi con esa placa" << endl;
	}
	pausarYLimpiar();
}
//extra menu
int Interfaz::menuExtra()
{
	int opcion = 0;
	cout << "1) Reportar de los datos de la empresa." << endl;
	cout << "2) Reportar el monto total a pagar por parte del hospital por concepto de taxis." << endl;
	cout << "3) Reporte de la persona que ha realizado mas citas en el hospital." << endl;
	cout << "4) Reportar la fecha en que han asistido mayor numero de pacientes." << endl;
	cout << "5) Reportar el tipo de transporte mas utilizado por los paciente (propio, taxi, ambulancia)" << endl;
	cout << "6) Reportar lista de ambulancias que se encuentran ocupadas." << endl;
	cout << "7) Reportar lista de tres profesores interinos con la mejor calificacion." << endl;
	cout << "8) Reportar lista de todos los estudiantes internacionales que tengan condicion de exiliado" << endl;
	cout << "9) Regresar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::mostrarDatosDeLaEmpresa()
{
	cout << hospital->toString() << endl;
	pausarYLimpiar();
}

void Interfaz::mostrarCostoDeLosTaxis()
{
	cout << hospital->mostrarCostoTotalPorTaxis() << endl;
	pausarYLimpiar();
}

void Interfaz::mostrarPersonaConMasCitas()
{
	cout << hospital->getListaDeCitas()->mostrarPersonaConMasCitas() << endl;
	pausarYLimpiar();
}

void Interfaz::mostrarFechaQueHanHabidoMasCitas()
{
	cout << "La fecha con mas citas es el: " << hospital->getListaDeCitas()->fechaConMasCitas()->toString() << endl;
	pausarYLimpiar();
}

void Interfaz::mostrarTipoDeTransporteMasUtilizado()
{
	cout << hospital->getListaDeTransportes()->tipoDeTransporteMasUtilizado();
	pausarYLimpiar();
}

void Interfaz::mostrarAmbulanciasOcupadas()
{
	cout << "Ambulancias ocupadas: " << endl;
	cout << hospital->getListaDeTransportes()->mostrarAmbulanciasOcupadas() << endl;
	pausarYLimpiar();
}

void Interfaz::mostrarTresMejoresInterinos()
{
	cout << "Ambulancias ocupadas: " << endl;
	cout << hospital->getListaDeTransportes()->mostrarAmbulanciasOcupadas() << endl;
	pausarYLimpiar();
}

void Interfaz::mostrarEstInternacionales()
{
	cout << "Exiliados: " << endl;
	cout << hospital->getListaDePacientes()->mostrarEstInternacionalesExiliados() << endl;
	pausarYLimpiar();
}
