#include "Camionero.h"


Camionero ::Camionero(): cedula(), nombre(),fechaNacimiento()
{
    cantTatuajes =0;
}

Camionero :: Camionero (int cant, String ced, String nom, Fecha f): cedula(ced), nombre(nom), fechaNacimiento(f)
{
    cedula = ced;
    cantTatuajes =cant;
}

Camionero :: ~Camionero ()
{
}

String Camionero:: getNombre()
{
    return nombre;
}

Fecha Camionero:: getFechaNacimiento()
{
    return fechaNacimiento;
}

int Camionero:: getCantTatuajes()
{
    return cantTatuajes;
}


String Camionero:: getCedula()
 {
    return cedula;
 }
String Camionero:: GetClave(){
    return "";
}

void Camionero:: setCedula(String ced)
{
    cedula.operator=(ced);
}

