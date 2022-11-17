#pragma once
#include "Interfaz.h"

class Controlador
{
public:
	void iniciar();
	int menuPrincipal();

	void controladorCitas();
	//case 2 (menu mantenimiento)
	int menuMantenimiento();
	void controladorMantenimiento();
	void controladorMantenimientoPacientes();
	void controladorMatenimientoMedicos();
	void controladorMantenimientoAmbulancia();
	void controladorMantenimientoTaxi();
	//case 3 (menu busquedas)
	void controladorBusquedas();
	void controladorBusquedaEspecifica();
	
	void controladorPrincipal(int);//main switch
};

