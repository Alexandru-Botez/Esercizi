#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	int scelta;

	do
	{
		cout << "quali delle 3 funzionalita vuoi usare ( 0 per uscire): ";
		cin >> scelta;

		if (scelta == 1)
		{
			int n;
			int counter = 0;
			int counter1 = 0;
			int moltiplicazione = 1;

			do
			{
				cout << "inserisci un numero: ";
				cin >> n;

				if (n > 0)
					moltiplicazione = moltiplicazione * n;

				if (n < 0)
					counter1++;

				counter++;
			} while (counter < 10 && counter1 != 2);
			cout << "la moltiplicazione tra i numeri sono: " << moltiplicazione << endl;
		}

		if (scelta == 2)
		{
			int lanci;
			int round = 0;
			int dado1, dado2;
			int cont_doppio = 0;
			srand(time(NULL));

			cout << "quanti lanci dei dadi vorresti? ";
			cin >> lanci;

			while (round < lanci)
			{
				dado1 = rand() % (6 - 1 + 1) + 1;
				dado2 = rand() % (6 - 1 + 1) + 1;

				cout << "valore dado 1: " << dado1 << endl;
				cout << "valore dado 2: " << dado2 << endl;

				if (dado1 == dado2)
				{
					cont_doppio++;
				}

				round++;
			}
			cout << "sono usciti: " << cont_doppio << " coppie di numeri uguali" << endl;
		}

		if (scelta == 3)
		{
			int num1;
			int num2;
			int mcd;

			cout << "inserisci un numero per trovare il MCD: " << endl;
			cin >> num1;
			cout << "inserisci un numero per trovare il MCD: " << endl;
			cin >> num2;

			if (num1 % num2 > 0)
			{
				mcd = num1 * num2;
			}
			else if (num1 < num2)
				mcd = num2;
			else
				mcd = num1;

			cout << "il mcd e: " << mcd << endl;
		}
	} while (scelta != 0);
}
