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
	return 0;
}

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
