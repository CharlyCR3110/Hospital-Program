#include "Controlador.h"

void Controlador::iniciar()
{
}

void Controlador::controladorCitas()
{
	int opcion = 0;
	do {
		opcion = Interfaz::menuCita();
		switch (opcion)
		{
		case 1:
			Interfaz::agregarCita();
			break;
		case 2:
			Interfaz::buscarCita();
			break;
		case 3:
			Interfaz::eliminarCita();
			break;
		case 4:
			Interfaz::mostrarCitasDeUnPaciente();
			break;
		case 5:
			Interfaz::mostrarTodasLasCitasDelHospital();
			break;
		case 6:
			Interfaz::regresar();
			break;
		default:
			Interfaz::opcionInvalida();
		}

	} while (opcion != 6);
}

void Controlador::controladorMantenimiento()
{
	int opcion = 0;
	do {
		opcion = Interfaz::menuMantenimiento();
		switch (opcion)
		{
		case 1:
			controladorMantenimientoPacientes();
			break;
		case 2:
			controladorMatenimientoMedicos();
			break;
		case 3:
			controladorMantenimientoAmbulancia();
			break;
		case 4:
			controladorMantenimientoTaxi();
			break;
		case 5:
			Interfaz::regresar();
			break;
		default:
			Interfaz::opcionInvalida();
		}
	} while (opcion != 5);
}

void Controlador::controladorMantenimientoPacientes()
{
	int opcion = 0;
	do {
		opcion = Interfaz::menuMantenimientoPacientes();
		switch (opcion)
		{
		case 1:
			Interfaz::agregarPaciente();
			break;
		case 2:
			Interfaz::eliminarPaciente();
			break;
		case 3:
			Interfaz::modificarPaciente();
			break;
		case 4:
			Interfaz::regresar();
			break;
		default:
			Interfaz::opcionInvalida();
			break;
		}
	} while (opcion != 4);
}

void Controlador::controladorMatenimientoMedicos()
{
	int opcion = 0;
	do {
		opcion = Interfaz::menuMantenimientoMedicos();
		switch (opcion)
		{
		case 1:
			Interfaz::agregarMedico();
			break;
		case 2:
			Interfaz::eliminarMedico();
			break;
		case 3:
			Interfaz::modificarMedico();
			break;
		case 4:	
			Interfaz::regresar();
			break;
		default:
			Interfaz::opcionInvalida();
			break;
		}
	} while (opcion != 4);
}

void Controlador::controladorMantenimientoAmbulancia()
{
	int opcion = 0;
	do {
		opcion = Interfaz::menuMantenimientoAmbulancias();
		switch (opcion)
		{
		case 1:
			Interfaz::agregarAmbulancia();
			break;
		case 2:
			Interfaz::eliminarAmbulancia();
			break;
		case 3:
			Interfaz::modificarAmbulancia();
			break;
		case 4:
			Interfaz::regresar();
			break;
		default:
			Interfaz::opcionInvalida();
			break;
		}
	} while (opcion != 4);
}

void Controlador::controladorMantenimientoTaxi()
{
	int opcion = 0;
	do {
		opcion = Interfaz::menuMantenimientoTaxis();
		switch (opcion)
		{
		case 1:
			Interfaz::agregarTaxi();
			break;
		case 2:
			Interfaz::eliminarTaxi();
			break;
		case 3:
			Interfaz::modificarTaxi();
			break;	
		case 4:
			Interfaz::regresar();
			break;
		default:
			Interfaz::opcionInvalida();
			break;
		}
	} while (opcion != 4);
}

void Controlador::controladorBusquedas()
{
	// "1) Mostrar Pacientes" << endl;
	// "2) Mostrar Medicos" << endl;
	// "3) Mostrar Transportes" << endl;
	// "4) Buscar Elemento Especifico" << endl;
	// "5) Regresar" << endl;
	int opcion = 0;
	do {
		opcion = Interfaz::menuBusquedas();
		switch (opcion)
		{
		case 1:
			Interfaz::mostrarTodosLosPacientes();
			break;
		case 2:
			Interfaz::mostrarTodosLosMedicos();
			break;
		case 3:
			Interfaz::mostrarTodosLosTransportes();
			break;
		case 4:
			Controlador::controladorBusquedaEspecifica();
			break;
		case 5:
			Interfaz::regresar();
			break;
		default:
			Interfaz::opcionInvalida();
			break;
		}
	} while (opcion != 5);
}

void Controlador::controladorBusquedaEspecifica()
{
	// "1) Buscar Estudiante" << endl;
	// "2) Buscar Profesor" << endl;
	// "3) Buscar Medico" << endl;
	// "4) Buscar Ambulancia" << endl;
	// "5) Buscar Taxi" << endl;
	// "6) Regresar" << endl;
	int opcion = 0;
	do {
		opcion = Interfaz::menuBusquedasEspecifica();
		switch (opcion)
		{
		case 1:
			Interfaz::buscarEstudiante();
			break;
		case 2:
			Interfaz::buscarProfesor();
		case 3:
			Interfaz::buscarMedico();
			break;
		case 4:
			Interfaz::buscarAmbulancia();
			break;
		case 5:
			Interfaz::buscarTaxi();
			break;
		case 6:
			Interfaz::regresar();
			break;
		default:
			Interfaz::opcionInvalida();
			break;
		}
	} while (opcion != 6);
}

void Controlador::controladorExtra()
{
	// "1) Reportar de los datos de la empresa." << endl;
	// "2) Reportar el monto total a pagar por parte del hospital por concepto de taxis." << endl;
	// "3) Reporte de la persona que ha realizado mas citas en el hospital." << endl;
	// "4) Reportar la fecha en que han asistido mayor numero de pacientes." << endl;
	// "5) Reportar el tipo de transporte mas utilizado por los paciente (propio, taxi, ambulancia)" << endl;
	// "6) Reportar lista de ambulancias que se encuentran ocupadas." << endl;
	// "7) Reportar lista de tres profesores interinos con la mejor calificacion." << endl;
	// "8) Reportar lista de todos los estudiantes internacionales que tengan condicion de exiliado" << endl;
	// "9) Regresar" << endl;
	int opcion = 0;
	do {
		opcion = Interfaz::menuExtra();
		switch (opcion)
		{
		case 1:
			Interfaz::mostrarDatosDeLaEmpresa();
			break;
		case 2:
			Interfaz::mostrarCostoDeLosTaxis();
			break;
		case 3:
			Interfaz::mostrarPersonaConMasCitas();
			break;
		case 4:
			Interfaz::mostrarFechaQueHanHabidoMasCitas();
			break;
		case 5:
			Interfaz::mostrarTipoDeTransporteMasUtilizado();
			break;
		case 6:
			Interfaz::mostrarAmbulanciasOcupadas();
			break;
		case 7:
			Interfaz::mostrarTresMejoresInterinos();
			break;
		case 8:
			Interfaz::mostrarEstInternacionales();
			break;
		case 9:
			Interfaz::regresar();
			break;
		default:
			Interfaz::opcionInvalida();
			break;
		}
	} while (opcion != 9);
}
