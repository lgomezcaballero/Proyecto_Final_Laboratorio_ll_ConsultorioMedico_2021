#include <iostream>
#include "Direccion.h"
#include "Empleado.h"
#include "FacturaConsulta.h"
#include "Fecha.h"
#include "HistoriaClinica.h"
#include "Hora.h"
#include "Paciente.h"
#include "Persona.h"
#include "Turno.h"
#include "FuncionesGlobales.h"
#include "FuncionesGlobalesDeMenus.h"
#include "TemplatesHTML.h"
#include "Fecha_Hora.h"
#include "HorarioEmpleado.h"
#include "Archivo.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    //RestaurarCopiaSeguridadPacientes();
    //ListadoDePacientesPorApellido();
    /*Archivo reg;
    int pos = 0;
    while (reg.leerDeDisco(pos++, "Backup/Pacientes/rutas.dat"))
    {
        reg.Mostrar();
    }*/
    /*Archivo reg;
    int pos = 0;
    while (reg.leerDeDisco(pos++,"Backup/Pacientes/rutas.dat")) {
        reg.Mostrar();
    }*/
    //CopiaSeguridadPacientes();
    //CopiaSeguridadEmpleados();
    //ExportarEmpleados();
    //char c[2] = { 92 };
    //cout << c;
    //AgregarPaciente();
    //prueba();
    //Fecha f(14,1,2022);
    //f.Mostrar();
    //cout << f.getFeriado();
    //cout<<f.getNumeroDia();
    //Hora v[20];
    //cargarHorarios(v);
    //Fecha_Hora reg;
    //reg.Mostrar();
    //AsignarTurno();
    //ModificarTurno();
    //login();
    //Hora h1(8, 0), h2(18, 0);
    //HorarioEmpleado horaLaboral;
    //horaLaboral.setHoraEntrada(h1);
    /*for (int i = 3; i < 10; i++)
    {
        Empleado reg;
        Especialidad e;
        reg.setDNI(123456);
        reg.setNombres("Ana");
        reg.setApellidos("Gutierrez");
        reg.setLegajo(3333);
        char pass[30];
        strcpy(pass, "AnaMartinez");
        reg.setPassword(pass);
        reg.setEmail("leandro.gomez3@alumnos.frgp.utn.edu.ar");
        reg.setTipoEmpleado(2);
        e.setNEspecialidades(i);
        reg.setEspecialidad(e);
        reg.grabarEnDisco();
    }*/

    //reg.setEspecialidad(0);

    /*Empleado obj;
    obj.setDNI(123456);
    obj.setNombres("Tobias");
    obj.setApellidos("Iaconis");
    obj.setLegajo(2222);
    strcpy(pass, "12345678");
    obj.setPassword(pass);
    obj.setEmail("tobias.iaconis@alumnos.frgp.utn.edu.ar");
    obj.setTipoEmpleado(99);*/
    //Empleado reg(horaEntrada, horaSalida, 123456, "Tobias", "Iaconis", 321, "321", "tobias.iaconis@alumnos.frgp.utn.edu.ar", 1, 0, true);
    //reg.grabarEnDisco(0);
    //obj.grabarEnDisco(0);
    /*cout << endl;
    Paciente t;
    int pos = 0;

    while (t.leerDeDisco(pos++)) {
        t.Mostrar();
    cout << endl; 
    }*/
    //t.setFechaAsignacionTurno();
    //t.getFechaAsignacionTurno().Mostrar();*/
    //prueba();
}