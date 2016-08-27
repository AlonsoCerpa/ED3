#include "Receptor.h"

#include <iostream>

std::string Receptor::descifrar(std::string textoCifrado)
{
    std::string textoDescifrado;
    int lengthText = static_cast<int>(textoCifrado.length());
    int filas = lengthText / clave;

    if (lengthText % clave > 0)
        ++filas;

    for (int i = 0; i < filas; ++i)
    {
        for (int j = i; j < lengthText; j += filas)
        {
            textoDescifrado += textoCifrado[j];
        }
    }
    return textoDescifrado;
}
