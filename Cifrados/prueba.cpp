#include "funciones.h"
#include <NTL/ZZ.h>

using namespace NTL;
using namespace std;

int main()
{
	ZZ result[3];
	ZZ num1 = conv<ZZ>("4574");
	ZZ num2 = conv<ZZ>("161");

	result = euclidesExt(num1, num2);
	for (int i = 0; i<3; ++i)
	{
		cout << result[i] << " ";
	}
	cout << endl;

	return 0;
}
