#include <iostream>

#include "receptor.h"
#include "emisor.h"

std::string Receptor::descifrar(std::string textoCifrado)
{
    std::string textoDescifrado;
    int lengthText = static_cast<int>(textoCifrado.length());
    int variablePos;

    for (int i = 0; i < lengthText; ++i)
    {
        variablePos = static_cast<int>(alfabeto.find(textoCifrado[i]));

        variablePos -= clave;

        if (variablePos < 0)
        {
            variablePos %= alfabetoLength;
            if (variablePos == 0)
                variablePos = -alfabetoLength;
            textoDescifrado += alfabeto[alfabetoLength + variablePos];
        }

        else
            textoDescifrado += alfabeto[variablePos];
    }

    return textoDescifrado;
}
