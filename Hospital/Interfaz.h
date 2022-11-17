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
	static int menuCita();




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
	//main
	static int menuMantenimiento();
	//pacientes
	static int menuMantenimientoPacientes();
	//funcionales
	static void agregarPaciente();
	static void eliminarPaciente();
	static void modificarPaciente();
	//auxiliares para la misma clase vista
	static void menuEditarPaciente();
	static int menuEditarEstudianteNacional();
	static int menuEditarEstudianteInternacional();
	static int menuEditarPacienteProfesorConPropiedad();
	static int menuEditarPacienteProfesorInterino();
	//menu mantenimineto de medicos
	static int menuMantenimientoMedicos();
	static int menuEditarMedico();
	static void agregarMedico();
	static void eliminarMedico();
	static void modificarMedico();
	//menu matenimineto de ambulancias
	static int menuMantenimientoAmbulancias();
	static int menuEditarAmbulancia();
	static void agregarAmbulancia();
	static void eliminarAmbulancia();
	static void modificarAmbulancia();
	//menu matenimineto de taxis
	static int menuMantenimientoTaxis();
	static int menuEditarTaxi();
	static void agregarTaxi();
	static void eliminarTaxi();
	static void modificarTaxi();
	//menu busquedas
	static int menuBusquedas();
	static void mostrarTodosLosPacientes(); //case 1
	static void mostrarTodosLosMedicos(); //case 2
	static void mostrarTodosLosTransportes(); //case 3
	static int menuBusquedasEspecifica(); //case 4
	//busque especifica 
	static void buscarEstudiante();
	static void buscarProfesor();
	static void buscarMedico();
	static void buscarAmbulancia();
	static void buscarTaxi();
	//extra menu
	static int menuExtra();
	static void mostrarDatosDeLaEmpresa();
	static void mostrarCostoDeLosTaxis();
	static void mostrarPersonaConMasCitas();
	static void mostrarFechaQueHanHabidoMasCitas();
	static void mostrarTipoDeTransporteMasUtilizado();
	static void mostrarAmbulanciasOcupadas();
	static void mostrarTresMejoresInterinos();
	static void mostrarEstInternacionales();
};