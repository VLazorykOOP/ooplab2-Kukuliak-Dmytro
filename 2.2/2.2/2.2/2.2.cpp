#include <iostream>
#include <bitset>
using namespace std;
void Shifruvanna(char S[64], unsigned short Rez[64])
{
	unsigned char c;
	unsigned short r, t, i, b;
	short j;

	for (i = 0; i < 64; i++) //
	{
		r = 0;//ініціалізація буфера як 0000 0000 0000 0000
		c = S[i];
		t = c;
		r |= i;
		b = t;
		for (j = 0; j < 16; j++) // обчислення біта парності
		{
			if (r & i) {
				if (b == 0) b = 1; else b = 0;
			}
			t <<= 1;
		}
		r |= b << 7; // 0011 0000 0101 0111 if i=5 0000 0000 0000 0101
		t = c;
		r |= t << 7;

		
		Rez[i] = r;
		

	}
}
int main()
{
	char S[64];
	unsigned short Rez[64];
	unsigned short i;
	cin.getline(S, 64);

	Shifruvanna(S, Rez);
	for (i = 0; i < 64; i++)
		cout << bitset<16>(Rez[i]) << endl;
	return 0;
}
