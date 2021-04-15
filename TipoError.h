#ifndef TIPOERROR_H_INCLUDED
#define TIPOERROR_H_INCLUDED
#include <stdio.h>

typedef enum { SIN_ERROR, CAMION_YA_EXISTE,CAMION_NO_EXISTE, CAMIONERO_YA_EXISTE, CAMIONERO_NO_EXISTE, NO_HAY_CAMIONEROS_REGISTRADOS,
                NO_HAY_CAMIONES_REGISTRADOS
                } TipoError;

void ImprimirError(TipoError t); //Imprime el error

#endif // TIPOERROR_H_INCLUDED
