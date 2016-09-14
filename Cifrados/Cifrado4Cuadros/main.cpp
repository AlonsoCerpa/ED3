#include <iostream>

#include "cifrador4cuadros.h"

using std::string;
using std::cin;
using std::cout;

int main()
{
	string mensaje, key1, key2, key3, key4, mensajeCifrado;
	cout << "clave 1: ";
	cin >> key1;
	cout << "clave 2: ";
	cin >> key2;
	cout << "clave 3: ";
	cin >> key3;
	cout << "clave 4: ";
	cin >> key4;

	Cifrador4Cuadros cifrador(key1, key2, key3, key4);

	cout << "ingrese un mensaje: ";
	cin >> mensaje;

	while (mensaje.length() == 0)
	{
		cout << "Cifrado: ";
		mensajeCifrado = cifrador.cifrar(mensaje);
		cout << mensajeCifrado;
		cout << "Descifrado: ";
		cout << cifrador.descifrar(mensajeCifrado);
		
		cout << "ingrese un mensaje: ";
		cin >> mensaje;
	}

	return 0;
}