#pragma once
#include "SaludUni.h"
#include "Utiles.h"
class Interfaz
{	
public:
	static SaludUni* hospital;
	static int menuPrincipal();
	static int menuMantenimiento();
	static int menuMantenimientoPacientes();
	static void menuEditarPaciente();
	static int menuEditarEstudianteNacional();
	static int menuEditarEstudianteInternacional();
	static int menuEditarPacienteProfesorConPropiedad();
	static int menuEditarPacienteProfesorInterino();
	static int menuMantenimientoMedicos();
	static int menuEditarMedico();
	static int menuMantenimientoAmbulancias();
	static int menuEditarAmbulancia();
	static int menuMantenimientoTaxis();
	static int menuEditarTaxi();
	static int menuBusquedas();
	static int menuBusquedasEspecifica();
	static int menuExtra();
	//opciones del menu cita
	static void agregarCita();
	static void buscarCita();
	static void eliminarCita();
};

