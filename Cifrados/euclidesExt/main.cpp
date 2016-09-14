#include "fun.h"
#include <NTL/ZZ.h>

using namespace NTL;
using namespace std;

int main()
{
	ZZ *result;
	ZZ num1 = conv<ZZ>("1024");
	ZZ num2 = conv<ZZ>("1000");

	result = euclidesExt(num1, num2);
	for (int i = 0; i<3; ++i)
	{
		cout << result[i] << " ";
	}
	cout << endl;

	delete[] result;

	return 0;
}
