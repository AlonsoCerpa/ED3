#include <iostream>
#include <NTL/ZZ.h>

#include "C:\Users\acerp\Desktop\Cifrados\funciones.h"

using namespace NTL;
using namespace std;

int main()
{
    ZZ a(117);
    ZZ b(244);
    cout << inversa(a, b) << endl;

    return 0;
}
