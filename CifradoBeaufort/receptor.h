#ifndef RECEPTOR_H_INCLUDED
#define RECEPTOR_H_INCLUDED

#include <string>

class Receptor
{
public:
    Receptor(std::string clavePublica) : clave{clavePublica} {}

    std::string descifrar(std::string textoCifrado);

private:
    std::string clave;
    int claveLength;
};

#endif // RECEPTOR_H_INCLUDED
