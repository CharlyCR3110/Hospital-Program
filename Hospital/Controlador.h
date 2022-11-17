#pragma once
#include "Interfaz.h"

class Controlador
{
public:
	void iniciar();
	void agregarDatosDePrueba();
	//case 1 (menu citas)
	void controladorCitas();
	//case 2 (menu mantenimiento)
	void controladorMantenimiento();
	void controladorMantenimientoPacientes();
	void controladorMatenimientoMedicos();
	void controladorMantenimientoAmbulancia();
	void controladorMantenimientoTaxi();
	//case 3 (menu busquedas)
	void controladorBusquedas();
	void controladorBusquedaEspecifica();
	//case 4 (menu extra)
	void controladorExtra();
	void controladorPrincipal(int);//main switch
};

