#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int grandezza;
	int numero;
	int arrayN[1000];
	int i, j;
	srand(time(0));

	cout << "Quanto vuoi grande l'array?: ";
	cin >> grandezza;


	for (i = 0; i < grandezza; i++)
	{
		arrayN[i] = rand() % (50 - 0 + 1) + 0;
	}

	for (i = 0; i < grandezza; i++)
	{
		cout << " [" << arrayN[i] << "] ";
	}

	cout << endl;

	cout << "Quale numero vuoi rimuovere dall'array?: ";
	cin >> numero;

	for (i = 0; i < grandezza; i++)
	{
		if (numero == arrayN[i])
		{
			for (j = i; j < grandezza; j++)
			{
				arrayN[j] = arrayN[j + 1];
			}
			grandezza--;
		}
	}


	for (i = 0; i < grandezza; i++)
	{
		cout << " [" << arrayN[i] << "] ";
	}

}
