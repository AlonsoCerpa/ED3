#ifndef RECEPTOR_H_INCLUDED
#define RECEPTOR_H_INCLUDED

#include <iostream>

class Receptor
{
public:
    Receptor(int clavePublica) : clave{clavePublica} {}

    std::string descifrar(std::string textoCifrado);

private:
    int clave;
};

#endif // RECEPTOR_H_INCLUDED
