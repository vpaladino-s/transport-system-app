#include "Menu.h"

void ImprimirMenu (int &o){
/*
1. Registro de un nuevo camión, dados sus datos y la cédula del camionero que lo maneja.

2. Listado básico de todos los camiones registrados. No se pide ningún orden para este listado.

3. Listado detallado de un camión. Dada la matrícula del camión, listar todos sus datos. También se
deben listar los datos del camionero que lo maneja y la cantidad de metros cúbicos anuales que
es capaz de transportar. En caso de que el camión no exista, se debe emitir un mensaje de error.

4. Registro de un nuevo camionero, dados sus datos. Se debe chequear que no exista otro camionero
con la misma cédula. En otro caso, el registro será cancelado, emitiendo un mensaje de error.

5. Listado de todos los camioneros registrados. Este listado debe realizarse ordenado por cédula
de identidad de menor a mayor.

6. Calcular la cantidad de metros cúbicos anuales que toda la flota de camiones es capaz de
transportar (es decir, la suma de todas las cantidades de metros cúbicos anuales que cada
camión es capaz de transportar).

7) Dada la matrícula de un camión, modificar la cantidad de viajes anuales que realiza dicho
camión. En caso de el camión no exista, se debe emitir un mensaje de error.

8) Obtener la cantidad de camiones de cada tipo que hay en la flota (es decir, la cantidad de
camiones simples, la cantidad de camiones grandes y la cantidad de camiones con remolque).

9) Listar los datos del camionero con la mayor cantidad de tatuajes. En caso de que haya más de
uno, listar cualquiera de ellos. En caso de que no haya ningún camionero registrado, se debe
emitir un mensaje de error.

10) Dada una fecha, contar cuántos camiones grandes hay registrados cuya fecha de adquisición
sea posterior a dicha fecha. */

    printf("\n\n************MENU************\n\n");
    printf("\n1. Registrar camion");
    printf("\n2. Listado de camiones registrados");
    printf("\n3. Listado detallado de un camion");
    printf("\n4. Registro de un nuevo camionero");
    printf("\n5. Listado de todos los camioneros registrados");
    printf("\n6. Calcular la cantidad de metros cubicos anuales");
    printf("\n7. Modificar la cantidad de viajes anuales de un camion");
    printf("\n8. Obtener la cantidad de camiones de cada tipo que hay en la flota");
    printf("\n9. Listar los datos del camionero con la mayor cantidad de tatuajes.");
    printf("\n10. Dada una fecha, contar cuantos camiones grandes hay registrados");
    printf("\n\n\n11. Salir");

    printf("\n\nIngrese una Opcion: ");
    scanf("%d",&o);
}
