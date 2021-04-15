#ifndef SIMPLE_H_INCLUDED
#define SIMPLE_H_INCLUDED
#include "Camion.h"

class Simple : public Camion
{
    private:
        String depto;

    public:

        Simple(int, String, String, String); //Constructor comun

        ~Simple (); //Destructor

        String getDepto();

        void setDepto (String);

        String tipoCamion();

        float Volumen ();

};


#endif // SIMPLE_H_INCLUDED
