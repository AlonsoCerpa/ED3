#include <iostream>

#include "Emisor.h"
#include "Receptor.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int clave;
    std::string mensaje;
    std::string mensajeCifrado;
    std::string mensajeDescifrado;

    cout << "Ingrese una clave: ";
    cin >> clave;

    while (clave > 0)
    {
        Emisor emisor(clave);
        Receptor receptor(clave);

        cout << "Ingrese un mensaje: ";
        cin.ignore();
        std::getline(cin, mensaje);

        mensajeCifrado = emisor.cifrar(mensaje);
        cout << "Mensaje cifrado: " << mensajeCifrado << endl;

        mensajeDescifrado = receptor.descifrar(mensajeCifrado);
        cout << "Mensaje descifrado: " << mensajeDescifrado << endl;

        cout << endl << "Ingrese una clave: ";
        cin >> clave;
    }

    return 0;
}
