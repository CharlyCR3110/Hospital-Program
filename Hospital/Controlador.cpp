#include "Controlador.h"

void Controlador::iniciar()
{
	int opcion = 0;
	do {
		opcion = Interfaz::menuPrincipal();
		pausarYLimpiar();
		controladorPrincipal(opcion);
	} while (opcion != 5);
}

void Controlador::agregarDatosDePrueba()
{
	//pacientes
	Paciente* interino1 = new Interino("Juan", "Quiros", 27, "UCR", "102210324", "Informatica", 5, 9.5);
	Paciente* interino2 = new Interino("Jose", "Ramirez", 30, "UNA", "604830132", "Sistemas", 7, 6.5);
	Paciente* interino3 = new Interino("Maria", "Rodriguez", 25, "UCR", "502412022", "Biologia", 5, 7.5);
	Paciente* interino4 = new Interino("Rigoberto", "Perez", 60, "UTN", "53203422", "Sistemas", 7, 9);

	Paciente* conPropiedad1 = new ConPropiedad("Ana", "Garita", 45, "UIA", "605590217", "Sistemas", 15, "C-6055");
	Paciente* conPropiedad2 = new ConPropiedad("Mario", "Quiros", 28, "UNA", "52452342", "Calculo", 5, "C-5245");
	Paciente* conPropiedad3 = new ConPropiedad("Luis", "Rodriguez", 35, "UCR", "101320124", "Informatica", 5, "C-1022");
	Paciente* conPropiedad4 = new ConPropiedad("Luis", "Perez", 35, "UNED", "203430125", "Materiales", 5, "C-2034");

	Paciente* estNacional1 = new EstNacional("Ramiro", "Quiros", 28, "UNA", "S-124", "Primero", "8912-2121", "601290217", "activo");
	Paciente* estNacional2 = new EstNacional("Rigoberto", "Rodriguez", 28, "UNA", "S-124", "Segundo", "6843-2231", "402310832", "activo");
	Paciente* estNacional3 = new EstNacional("Mario", "Perez", 28, "UNA", "M-589", "Tercero", "6632-2131", "801230743", "suspendido");
	Paciente* estNacional4 = new EstNacional("Luis", "Ballesteros", 28, "UNA", "M-589", "Cuarto", "6036-2211", "103200432", "suspendido");

	Paciente* estInternacional1 = new EstInternacional("Carlos", "Gallardo", 28, "UIA", "MS-123", "Cuarto", "7821-3234", "Boliaviano", "BV-8821", "Exiliado");
	Paciente* estInternacional2 = new EstInternacional("Rigoberto", "Rodriguez", 28, "UNA", "S-124", "Tercero", "6843-2231", "Chileno", "CH-3184", "Refugiado");
	Paciente* estInternacional3 = new EstInternacional("Mario", "Perez", 28, "UCIMED", "MG-832", "Segundo", "7788-2531", "Colombiano", "CL-2883", "Exiliado");
	Paciente* estInternacional4 = new EstInternacional("Ian", "Ballesteros", 28, "UCR", "AU-743", "Primero", "6036-9892", "Venezolano", "VN-1231", "Exiliado");
	//medicos
	Medico* medico1 = new Medico("Pedro", "Perez", 35, "60390217", "Cardiologia", "8726-6514");
	Medico* medico2 = new Medico("Juan Jose", "Quiros", 35, "602110211", "General", "6392-2426");
	Medico* medico3 = new Medico("Kevin", "Rodriguez", 35, "203210543", "General", "8923-2251");
	Medico* medico4 = new Medico("Rigoberto", "Perez", 35, "40431024", "Odontologia", "7271-3421");
	//Taxis
	Transporte* taxi1 = new Taxi("P-1111", "Nissan");
	Transporte* taxi2 = new Taxi("P-2222", "Toyota");
	Transporte* taxi3 = new Taxi("P-3333", "Mazda");
	Transporte* taxi4 = new Taxi("P-4444", "Chevrolet");
	//Ambulancias
	Transporte* ambulancia1 = new Ambulancia("PA-1111", "Volkswagen",0, "A-1111");
	Transporte* ambulancia2 = new Ambulancia("PA-2222", "Volkswagen", 0, "A-2222");
	Transporte* ambulancia3 = new Ambulancia("PA-3333", "Volkswagen", 0, "A-3333");
	Transporte* ambulancia4 = new Ambulancia("PA-4444", "Volkswagen", 0, "A-4444");
	//pacientes
	Interfaz::hospital->insertarPaciente(interino1);
	Interfaz::hospital->insertarPaciente(interino2);
	Interfaz::hospital->insertarPaciente(interino3);
	Interfaz::hospital->insertarPaciente(interino4);
	Interfaz::hospital->insertarPaciente(conPropiedad1);
	Interfaz::hospital->insertarPaciente(conPropiedad2);
	Interfaz::hospital->insertarPaciente(conPropiedad3);
	Interfaz::hospital->insertarPaciente(conPropiedad4);
	Interfaz::hospital->insertarPaciente(estNacional1);
	Interfaz::hospital->insertarPaciente(estNacional2);
	Interfaz::hospital->insertarPaciente(estNacional3);
	Interfaz::hospital->insertarPaciente(estNacional4);
	Interfaz::hospital->insertarPaciente(estInternacional1);
	Interfaz::hospital->insertarPaciente(estInternacional2);
	Interfaz::hospital->insertarPaciente(estInternacional3);
	Interfaz::hospital->insertarPaciente(estInternacional4);
	//medicos
	Interfaz::hospital->insertarMedico(medico1);
	Interfaz::hospital->insertarMedico(medico2);
	Interfaz::hospital->insertarMedico(medico3);
	Interfaz::hospital->insertarMedico(medico4);
	//taxis
	Interfaz::hospital->insertarTransporte(taxi1);
	Interfaz::hospital->insertarTransporte(taxi2);
	Interfaz::hospital->insertarTransporte(taxi3);
	Interfaz::hospital->insertarTransporte(taxi4);
	//ambulancias
	Interfaz::hospital->insertarTransporte(ambulancia1);
	Interfaz::hospital->insertarTransporte(ambulancia2);
	Interfaz::hospital->insertarTransporte(ambulancia3);
	Interfaz::hospital->insertarTransporte(ambulancia4);
}

void Controlador::controladorCitas()
{
	int opcion = 0;
	do {
		opcion = Interfaz::menuCita();
		pausarYLimpiar();
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
		pausarYLimpiar();
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
		pausarYLimpiar();
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
		pausarYLimpiar();
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
		pausarYLimpiar();
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
		pausarYLimpiar();
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
		pausarYLimpiar();
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
	int opcionBusqueda = 0;
	do {
		opcionBusqueda = Interfaz::menuBusquedasEspecifica();
		pausarYLimpiar();
		switch (opcionBusqueda)
		{
		case 1:
			Interfaz::buscarEstudiante();
			break;
		case 2:
			Interfaz::buscarProfesor();
			break;
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
	} while (opcionBusqueda != 6);
}

void Controlador::controladorExtra()
{
	int opcion = 0;
	do {
		opcion = Interfaz::menuExtra();
		pausarYLimpiar();
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

void Controlador::controladorPrincipal(int opcion)
{
	this->agregarDatosDePrueba();
	switch (opcion)
	{
	case 1:
		Controlador::controladorCitas();
		break;
	case 2:
		Controlador::controladorMantenimiento();
		break;
	case 3:
		Controlador::controladorBusquedas();
		break;
	case 4:
		Controlador::controladorExtra();
		break;
	case 5:
		Interfaz::salir();
		break;
	default:
		Interfaz::opcionInvalida();
		break;
	}
}
