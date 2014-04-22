#include "llamadas.h"

void llamadaFactorial()
{
    int n;
    printf("Factorial\n");
    do
    {
        printf("\nIngrese un numero no negativo: ");
        scanf("%d",&n);
    }
    while(n<0);
    printf("\nResultado: %d\n\n",factorial(n));
}

void llamadaCombinatorio()
{
    int f, m, n;
    printf("Combinatorio\n");
    do
    {
        printf("Ingrese un numero no negativo: ");
        scanf("%d",&n);
    }
    while(n<0);
    do
    {
        printf("Ingrese un numero no negativo, mayor o igual al numero anterior: ");
        scanf("%d",&m);
    }
    while(m<n);
    printf("\nResultado: %d",combinatorio(n,m));
}
