#include "ej1.h"

int factorial(int x)
{
    return (x==0)?1:x*factorial(x-1);
}
