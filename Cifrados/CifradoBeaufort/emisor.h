#ifndef EMISOR_H_INCLUDED
#define EMISOR_H_INCLUDED

#include <string>

extern std::string alfabeto;
extern int alfabetoLength;

class Emisor
{
public:
    Emisor(std::string clavePrivada) : clave{clavePrivada} {}

    std::string cifrar(std::string textoPlano);

private:
    std::string clave;
    int claveLength;
};

#endif // EMISOR_H_INCLUDED
