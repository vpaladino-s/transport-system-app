#ifndef CAMIONERO_H_INCLUDED
#define CAMIONERO_H_INCLUDED
#include "Fecha.h"
#include "String.h"
#include "Objeto.h"

class Camionero: public Objeto
{
    private:
            String cedula;
            String nombre;
            int cantTatuajes;
            Fecha fechaNacimiento;

    public:
        Camionero();   // constructor por defecto

        Camionero(int, String, String, Fecha); // constructor común

        ~Camionero(); // destructor

        String getCedula();

        String getNombre();

        int getCantTatuajes();

        Fecha getFechaNacimiento();

        void setCedula(String);

        String GetClave();
};



#endif // CAMIONERO_H_INCLUDED
