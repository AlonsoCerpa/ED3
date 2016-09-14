#include "emisor.h"
#include "receptor.h"
#include <NTL/ZZ.h>

#include <iostream>
#include <random>

using std::cout;
using std::cin;
using std::endl;
using std::string;

using namespace NTL;

string alfabeto{"abcdefghijklmnopqrstuvwxyz"};
int alfabetoLength = alfabeto.length();

int main()
{
	/* Agregare numeros grandes aleatorios
	int cteDecimacion, cteDesplazamiento;
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> uni(-2147483648, 2147483647);
*/
	
	string cifrado;
	cout << "Cte decimacion: ";
	cteDecimacion = 
	while (cteDecimacion == -1)
	{
		cteDecimacion = min + (rand() % (int)(max - min + 1))
	}
	cout << "Cte desplazamiento: ";
	cin >> cteDesplazamiento;

	while (cteDecimacion != 1 || cteDesplazamiento != 0)
	{
		Emisor emisor(3, 5);
		cifrado = emisor.cifrar("hola");
		cout << cifrado << endl;

		Receptor receptor(9, 5);
		cout << receptor.descifrar(cifrado) << endl;
	}
	
	return 0;
}