#include <iostream>
using namespace std;

int main()
{
	char* a = new char[120 * 60 + 1];
	a[120 * 60] = '\0';

	for (int y = 0; y < 60; y++)
	{
		for (int x = 0; x < 60; x++)
		{
			a[y * 120 + x] = ' ';
		}
	}
	float xx, yy;
	for (int y = 0; y < 60; y++)
	{
		for (int x = 0; x < 60; x++)
		{
			xx = float(x / 120 * 2 - 1);
			yy = float(y / 60 * 2 - 1);

			if (xx * xx + yy * yy < 0.5)
			{
				a[y * 120 + x] = '@';
			}
		}
	}
	cout<<a;

	return 0;
}
