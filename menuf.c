#include "menu.h"

int menu()
{
    int opc;
    printf("\n\n_______________________\nMenu:\n1. Factorial\n2. Combinatoria\n3. Exponencial\n4. Raiz cuadrada\n5. Fibonacci\n6. Seno\n\n14. Salir\n\nOpcion: ");
    scanf("%d", &opc);
    printf("\n_______________________\n");
    switch(opc)
    {
    case 14:
        return 0;
    case 1:
        llamadaFactorial();
        break;
    case 2:
        llamadaCombinatorio();
        break;
    case 3:
        llamadaExponencial();
        break;
    case 4:
        llamadaRaizCuadrada();
        break;
    }
    return opc;
}
