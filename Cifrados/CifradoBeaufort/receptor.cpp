#include <iostream>

#include "receptor.h"
#include "emisor.h"

std::string Receptor::descifrar(std::string textoCifrado)
{
    std::string textoDescifrado;
    int lengthText = (textoCifrado.length());
    int posDescifrado;

    claveLength = clave.length();

    for (int contMensajeCif = 0, contClave = 0; contMensajeCif < lengthText; ++contMensajeCif, ++contClave)
    {
        if (contClave >= claveLength)
            contClave = 0;

        posDescifrado = alfabeto.find(clave[contClave]) - alfabeto.find(textoCifrado[contMensajeCif]);

        if (posDescifrado < 0)
            posDescifrado += alfabetoLength;

        textoDescifrado += alfabeto[posDescifrado];
    }

    return textoDescifrado;
}
