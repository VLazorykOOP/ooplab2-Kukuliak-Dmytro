#include <iostream>
using namespace std;

int main()
{
	cout << "Insert whole numbers a,b,c,d: ";
	int a, b, c, d, x, y;
	cin >> a >> b>> c >>d;
	x = ((b + (b << 4) + (a << 10) + (a << 11) + (a << 2) - (a << 6) >> 5) - (c << 7) + (c << 3) + (d << 7) - d);
	//(16b+b+2048a+1-24a+4a-64a)/32-128c+8c+128d-d
	y = ((17 * b + 3012 * a) / 32) - 120 * c + 127 * d;
	cout << " x=" << x << " y=" << y << " a=" << a << " b=" << b << endl;
	return 0;
}