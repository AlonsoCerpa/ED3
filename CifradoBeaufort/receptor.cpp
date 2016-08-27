#include <iostream>

#include "receptor.h"
#include "emisor.h"

std::string Receptor::descifrar(std::string textoCifrado)
{
    std::string textoDescifrado;
    int lengthText = static_cast<int>(textoCifrado.length());
    int posDescifrado;

    claveLength = clave.length();

    for (int contMensajeCif = 0, contClave = 0; contMensajeCif < lengthText; ++contMensajeCif, ++contClave)
    {
        if (contClave >= claveLength)
            contClave = 0;

        posDescifrado = (alfabeto.find(textoCifrado[contMensajeCif]) * -1) + alfabeto.find(clave[contClave]);

        textoDescifrado += alfabeto[posDescifrado];
    }

    return textoDescifrado;
}
