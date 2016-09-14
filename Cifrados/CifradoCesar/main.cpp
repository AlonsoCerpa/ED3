#include <iostream>

#include "emisor.h"
#include "receptor.h"

using std::cout;
using std::endl;
using std::cin;

std::string alfabeto{" abcdefghijklmnopqrstuvwxyz"};
int alfabetoLength = static_cast<int>(alfabeto.length());

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

        if (mensaje.compare(mensajeDescifrado) == 0)
            cout << "Se descifro con exito el mensaje" << endl;

        else
            cout << "No se descifro correctamente";

        cout << endl << "Ingrese una clave: ";
        cin >> clave;
    }

    return 0;
}
