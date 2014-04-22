#include "funciones.h"

int factorial(int x)
{
    return (x==0)?1:x*factorial(x-1);
}

int combinatorio(int n, int m)
{
    return factorial(m)/(factorial(n)*factorial(m-n));
}

