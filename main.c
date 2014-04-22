#include <stdio.h>
#include "ej1.h"

int main()
{
    int n;
    printf("Factorial\n");
    do{
        printf("\nIngrese un numero no negativo: ");
        scanf("%d",&n);
    }while(n<0);
    printf("\nResultado: %d\n\n",factorial(n));
    return 0;
}
