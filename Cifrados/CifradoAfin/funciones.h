#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <vector>

int modulo(int a, int b)
{
   if (a >= 0)
       return a - (b  * (a / b));
   return a - (b * ((a / b) - 1));
}

///////////////////////////////////////////////////////////////////////////////////////////

vector<int> cocientes;

int inversa(int cont)
{
    if (cont == 0)
        return 0;
    else if (cont == 1)
        return 1;
    return modulo(inversa(cont - 2) - (inversa(cont - 1) * cocientes[cont - 2]), modulo);
}

int inversoMult(int num)
{
    int numInverso;
    int cont, auxNum;
    int sizeCocientes;
    int moduloAux = modulo;

    cocientes.resize(10);

    for (cont = 0; num > 1 ; ++cont)
    {
        cocientes[cont] = moduloAux / num;
        auxNum = num;
        num = moduloAux % num;
        moduloAux = auxNum;
    }

    if (num < 1)
        return -1;

    numInverso = inversa(cont + 1);

    return numInverso;
}

/////////////////////////////////////////////////////////////////////////////////////////

#endif // FUNCIONES_H_INCLUDED