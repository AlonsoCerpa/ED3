#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <NTL/ZZ.h>

using namespace NTL;
using namespace std;

ZZ modulo(ZZ a, ZZ b)
{
   if (a >= 0)
       return a - (b * (a / b));
   return a - (b * ((a / b) - 1));
}

ZZ mcdEuclides(ZZ num1, ZZ num2)
{
	ZZ res;
	unsigned cont;

	for (cont = 0; num2 > 0; ++cont)
	{
		res = modulo(num1, num2);
		num1 = num2;
		num2 = res;
	}
	cout <<"iteraciones: " << cont << endl;
	return num1;
}

ZZ mcdBinario(ZZ num1, ZZ num2)
{
	unsigned desp;
	unsigned cont = 0;
	ZZ aux;

	if (num1 == 0) return num2;
	if (num2 == 0) return num1;

	for (desp = 0; ((num1 | num2) & 1) == 0; ++desp)
	{
		num1 >>= 1;
		num2 >>= 1;
	}

	while ((num1 & 1) == 0)
		num1 >>= 1;

	do 
	{
		while ((*num2 & 1) == 0)
			*num2 >>= 1;

		if (*num1 > *num2)
		{
			aux = *num2;
			*num2 = *num1;
			*num1 = aux;
		}
		*num2 -= *num1;

	} while (num2 != 0);

    cout << "iteraciones: " << cont << endl;
	return num1 << desp;
}

ZZ *euclidesExt(ZZ num1, ZZ num2)
{
    ZZ r;
    ZZ s, s1(1), s2(0);
    ZZ t, t1(0), t2(1);
    ZZ q;
    ZZ *result;

    if (num2 == 0)
    {
        result = new ZZ(-1);
        return result;
    }

    while (num2 > 0)
    {
        q = num1 / num2;

        r = num1 - (q * num2);
        num1 = num2;
        num2 = r;

        s = s1 - (q * s2);
        s1 = s2;
        s2 = s;

        t = t1 - (q * t2);
        t1 = t2;
        t2 = t;
    }

    result = new ZZ[3];
    result[0] = num1;
    result[1] = s1;
    result[2] = t1;

    return result;
}

ZZ inversa(ZZ num1, ZZ num2)
{
    ZZ mod = num2;
    ZZ r;
    ZZ s, s1(1), s2(0);
    ZZ q;

    if (num2 == 0)
    	return ZZ(-1);

    while (num2 > 0)
    {
        q = num1 / num2;

        r = num1 - (q * num2);
        num1 = num2;
        num2 = r;

        s = s1 - (q * s2);
        s1 = s2;
        s2 = s;
    }

    if (num1 != 1)
    	return ZZ(-1);

    else
    {
        if (s1 < 0)
            return s1 + mod;
        return s1;
    }
}

#endif //FUNCIONES_H_INCLUDED
