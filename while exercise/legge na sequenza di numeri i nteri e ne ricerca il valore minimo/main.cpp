#include <iostream>
using namespace std;
void ciao()
{
	int num = 1 , min = 0;

	while (num > 0)
	{
		cout << "inserisci un numero: ";
		cin >> num;

		if (num > 0 && (min == 0 || num < min))
			min = num;
	}
	cout << "il minore e " << min;
}
