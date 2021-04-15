#include "Camion.h"


Camion ::Camion(): matricula(),marca()
{
    cantViajesAnuales =0;
}


Camion :: Camion (int cant, String mat, String mar): marca(mar), matricula(mat)
{
   cantViajesAnuales =cant;
   cam = NULL;
}

Camion :: ~Camion ()
{
}

String Camion:: getMarca()
{
    return marca;
}

String Camion:: getMatricula()
{
    return matricula;
}

int Camion:: getCantViajesAnuales()
{
    return cantViajesAnuales;
}

void Camion :: setCantidadViajesAnuales(int cant){
    cantViajesAnuales =cant;
}

void Camion :: setMarca(String mar){
    marca.operator=(mar);
}

void Camion :: setCamionero(Camionero * c)
{
    cam = c;
}

void Camion :: setMatricula(String m)
{
    matricula.operator=(m);
}

Camionero * Camion:: getCamionero()
{
    return cam;
}


String Camion:: GetClave()
{
    return "";
}


