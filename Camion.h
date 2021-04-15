#ifndef CAMION_H_INCLUDED
#define CAMION_H_INCLUDED
#include "String.h"
#include "Camionero.h"
#include "Objeto.h"
#include <iostream>
using namespace std;

class Camion : public Objeto
{
    private:
        int cantViajesAnuales;
        String matricula;
        String marca;
        Camionero * cam;


    public:
        Camion();   // constructor por defecto

        Camion(int, String, String); //constr comun sin CAmionero

        ~Camion(); // destructor

        String getMarca(); // selectora de marca

        String getMatricula(); // selectora de matricula

        int getCantViajesAnuales(); // selectora de CantViajesAnuales

        Camionero * getCamionero(); //Selectora de camionero

        void setCantidadViajesAnuales(int);

        void setMatricula(String);

        void setMarca(String);

        void setCamionero(Camionero *);

        virtual String tipoCamion () = 0;   //método virtual puro, indica de qué tipo es el camion;

        String GetClave();

        virtual float Volumen ()=0;

};


#endif // CAMION_H_INCLUDED
