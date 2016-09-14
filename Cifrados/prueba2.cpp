#include <NTL/ZZ.h>

using namespace NTL;
using namespace std;

int main()
{
	ZZ a = conv<ZZ>("99999999999999999991236984123685623958123572359182349");
	cout << a;
	return 0;
}
