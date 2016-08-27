#include <iostream>

#include "emisor.h"

std::string Emisor::cifrar(std::string textoPlano)
{
    std::string textoCifrado;
    unsigned lengthText = textoPlano.length();
    unsigned variablePos;

    for (unsigned i = 0; i < lengthText; ++i)
    {
        variablePos = alfabeto.find(textoPlano[i]);
        variablePos += clave;

        if (variablePos >= alfabetoLength)
            variablePos %= alfabetoLength;

        textoCifrado += alfabeto[variablePos];
    }

    return textoCifrado;
}
