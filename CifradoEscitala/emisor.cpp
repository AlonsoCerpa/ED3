#ifndef EMISOR_CPP_INCLUDED
#define EMISOR_CPP_INCLUDED

#include <iostream>

#include "Emisor.h"

std::string Emisor::cifrar(std::string textoPlano)
{
    std::string textoCifrado;
    int length = static_cast<int>(textoPlano.length());
    int completeString = clave - (length % clave);

    for (int i = 0; i < completeString; ++i)
    {
        textoPlano += ' ';
    }

    length += completeString;

    for (int i = 0; i < clave; ++i)
    {
        for (int j = i; j < length; j += clave)
        {
            textoCifrado += textoPlano[j];
        }
    }
    return textoCifrado;
}

#endif // EMISOR_CPP_INCLUDED
