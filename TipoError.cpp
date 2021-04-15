#include "TipoError.h"

void ImprimirError(TipoError t)
{
    switch(t){
        case CAMION_YA_EXISTE: printf("\nERROR : El camion ya fue ingresado\n");
                                break;

        case CAMION_NO_EXISTE: printf("\nERROR : No existe el camion\n");
                                break;

        case CAMIONERO_YA_EXISTE: printf("\nERROR : El camionero ya fue ingresado\n");
                                break;

        case CAMIONERO_NO_EXISTE: printf("\nERROR : No existe el camionero\n");
                                    break;

        case NO_HAY_CAMIONES_REGISTRADOS: printf("\nERROR : No hay camiones registrados\n");
                                        break;

        case NO_HAY_CAMIONEROS_REGISTRADOS: printf("\nERROR : No hay camioneros registrados\n");
                                        break;

        case SIN_ERROR: printf("\n\n");
                                break;
    }
}
