#ifndef FUN_H_INCLUDED
#define FUN_H_INCLUDED

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
	else if (num2 == 0) return num1;

	for (desp = 0; ((num1 | num2) & 1) == 0; ++desp)
	{
		num1 >>= 1;
		num2 >>= 1;
	}

	while ((num1 & 1) == 0)
		num1 >>= 1;

    while ((num2 & 1) == 0)
        num2 >>= 1;

    if (num1 > num2)
    {
        aux = num2;
        num2 = num1;
        num1 = aux;
    }
    num2 -= num1;

	while (num2 != 0)
	{
		for ( ; (num2 & 1) == 0; ++cont)
			num2 >>= 1;

		if (num1 > num2)
		{
			aux = num2;
			num2 = num1;
			num1 = aux;
		}

		num2 -= num1;
		++cont;
	}

    cout << "iteraciones: " << cont << endl;
	return num1 << desp;
}

ZZ *euclidesExt(ZZ num1, ZZ num2)
{
    ZZ r, r1 = num1, r2 = num2;
    ZZ s, s1(1), s2(0);
    ZZ t, t1(0), t2(1);
    ZZ q;
    ZZ *result;

    while (r2 > 0)
    {
        q = r1 / r2;

        r = r1 - (q * r2);
        r1 = r2;
        r2 = r;

        s = s1 - (q * s2);
        s1 = s2;
        s2 = s;

        t = t1 - (q * t2);
        t1 = t2;
        t2 = t;
    }

    result = new ZZ[3];
    result[0] = r1;
    result[1] = s1;
    result[2] = t1;

    return result;
}

#endif //FUN_H_INCLUDED
