#include <iostream>
#include <vector>
#include <fstream>

#include "inversoMult.h"
#include "emisor.h"
#include "receptor.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::fstream;

int main()
{
    int num, mod, resultado;
    string cadenaMensaje, auxCadena;

    ifstream mensaje;
    fstream mensajeBin;
    fstream cifradoBin;
    fstream descifradoBin;
    ofstream descifrado;

    mensaje.open("/home/alonso/Escritorio/Cifrados/CifradoTxts/mensaje");
    mensajeBin.open("/home/alonso/Escritorio/Cifrados/CifradoTxts/mensajeBin", fstream::binary | fstream::in | fstream::out);
    cifradoBin.open("/home/alonso/Escritorio/Cifrados/CifradoTxts/cifradoBin", fstream::binary | fstream::in | fstream::out);
    descifradoBin.open("/home/alonso/Escritorio/Cifrados/CifradoTxts/descifradoBin", fstream::binary | fstream::in | fstream::out);
    descifrado.open("/home/alonso/Escritorio/Cifrados/CifradoTxts/descifrado");    

    while (std::getline(mensaje, auxCadena))
    {
        cadenaMensaje += auxCadena;
    }

    mensajeBin.write(cadenaMensaje.c_str(), cadenaMensaje.length());

    mensaje.close();
    mensajeBin.close();
    cifradoBin.close();
    descifradoBin.close();
    descifrado.close();

    //cout << "numero: ";
    //cin >> num;

/*
    while (num >= 0)
    {
        cout << "mod: ";
        cin.ignore();
        cin >> mod;
        InversoMultModular inversoM(mod);
        resultado = inversoM.inversoMult(num);
        if (resultado == -1)
            cout << "no tiene inverso multiplicativo" << endl << endl;
        else
            cout << "su inverso multiplicativo es: " << resultado << endl << endl;
        cout << "numero: ";
        cin.ignore();
        cin >> num;
    }
*/
    return 0;
}
