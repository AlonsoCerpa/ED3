#include <iostream>

#include "emisor.h"

std::string Emisor::cifrar(std::string textoPlano)
{
    std::string textoCifrado;
    int posCifrado;
    int lengthText = textoPlano.length();

    claveLength = clave.length();

    for (int contMensaje = 0, contClave = 0; contMensaje < lengthText; ++contMensaje, ++contClave)
    {
        if (contClave >= claveLength)
            contClave = 0;

        posCifrado = alfabeto.find(clave[contClave]) - alfabeto.find(textoPlano[contMensaje]);

        if (posCifrado < 0)
            posCifrado = alfabetoLength + posCifrado;

        textoCifrado += alfabeto[posCifrado];
    }

    return textoCifrado;
}
