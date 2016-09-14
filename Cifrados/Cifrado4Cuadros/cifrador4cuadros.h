#ifndef CIFRADOR4CUADROS_H_INCLUDED
#define CIFRADOR4CUADROS_H_INCLUDED

#include <string>

using std::string;

string alfabeto{"abcdefghiklmnopqrstuvwxyz"};
int lengthAlfabeto = alfabeto.length();

class Cifrador4Cuadros
{
public:
	Cifrador4Cuadros(string _key1, string _key2, string _key3, string _key4)
		: key1{_key1}, key2{_key2}, key3{_key3}, key4{_key4} 
		{
			int length;

			for (int i = 0; i < 4; ++i)
			{
				length = (*arrayKeys[i]).length();

				for (int j = 0; j < length; ++j)
				{
					if ()
				}
			}
		}
	
	string cifrar(string mensaje)
	{

	}
	string descifrar(string cifrado)
	{

	}

private:
	string key1, key2, key3, key4;
	string quad1, quad2, quad3, quad4;
	string *arrayKeys[4]{&key, &key2, &key3, &key4};
};

#endif //CIFRADOR4CUADROS_H_INCLUDED