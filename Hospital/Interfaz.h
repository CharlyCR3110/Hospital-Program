#pragma once
#include "SaludUni.h"
#include "EstInternacional.h"
#include "EstNacional.h"
#include "Interino.h"
#include "ConPropiedad.h"
#include "Ambulancia.h"
#include "Taxi.h"
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
	//globales
	static void regresar();
	static void opcionInvalida();
	//opciones del menu cita
	static void agregarCita();
	static void buscarCita();
	static void eliminarCita();
	static void mostrarCitasDeUnPaciente();
	static void mostrarTodasLasCitasDelHospital();
	//menu mantenimiento de pacientes
	static void agregarPaciente();
	static void eliminarPaciente();
	static void modificarPaciente();
	//menu mantenimineto de medicos
	static void agregarMedico();
	static void eliminarMedico();
	static void modificarMedico();
	//menu matenimineto de ambulancias
	static void agregarAmbulancia();
};