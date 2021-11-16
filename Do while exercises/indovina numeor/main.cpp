#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	int rn;
	int min = 0, max = 100;
	char scelta;
	srand(time(NULL));

	
	
	do
	{
		rn = rand() % (max - min + 1) / 2 + min;
		cout << "Il numero a cui stai pensando adesso e: " << rn << endl;
		cout << "Inserisci G, P o X" << endl;
		cin >> scelta;

		if (scelta == 'p')
		{
			min = rn + 1;
		}
		if (scelta == 'g')
		{
			max = rn - 1;
		}


	} while (scelta != 'x');
	cout << "Hai indovinato!!" << endl;
}
