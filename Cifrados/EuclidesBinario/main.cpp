#include "funciones.h"

#include <NTL/ZZ.h>
#include <chrono>
#include <iostream>
#include <fstream>

using namespace NTL;
using namespace std;
using namespace std::chrono;

int main()
{
    string auxStr, num1Str, num2Str;
    ifstream num1Txt, num2Txt;
	ZZ num1;
	ZZ num2;
	long nBits = 20000;
	high_resolution_clock::time_point iniTime1, iniTime2, endTime1, endTime2;


    num1Txt.open("num1Txt.txt");
    while (getline(num1Txt, auxStr))
    {
        num1Str += auxStr;
    }

    num2Txt.open("num2Txt.txt");
    while (getline(num2Txt, auxStr))
    {
        num2Str += auxStr;
    }

    num1 = ZZ(INIT_VAL, num1Str.c_str());
    num2 = ZZ(INIT_VAL, num2Str.c_str());

    num1Txt.close();
    num2Txt.close();

    //77 segundos +-, mcd = 2
	cout << "MCD binario: " << endl;
	iniTime2 = high_resolution_clock::now();
	cout << mcdBinario(num1, num2) << endl;
    endTime2 = high_resolution_clock::now();
    duration<double> time2 = duration_cast<duration<double>>(endTime2 - iniTime2);
    cout << "Tiempo: " << time2.count() << " segundos" << endl;

/*
    RandomBits(num1, nBits);
    cout << "Random num1: " << num1 << endl << endl;

    RandomBits(num2, nBits);
    cout << "Random num2: " << num2 << endl;

    //cout << "GCD NTL: " << endl;
    //cout << GCD(num1, num2) << endl << endl;

    cout << "MCD Euclides: " << endl;
    iniTime1 = high_resolution_clock::now();
	cout << mcdEuclides(num1, num2) << endl;
	endTime1 = high_resolution_clock::now();
	duration<double> time1 = duration_cast<duration<double>>(endTime1 - iniTime1);
    cout << "Tiempo: " << time1.count() << " segundos" << endl << endl;


	cout << "MCD binario: " << endl;
	iniTime2 = high_resolution_clock::now();
	cout << mcdBinario(num1, num2) << endl;
    endTime2 = high_resolution_clock::now();
    duration<double> time2 = duration_cast<duration<double>>(endTime2 - iniTime2);
    cout << "Tiempo: " << time2.count() << " segundos" << endl;
*/

	return 0;
}
