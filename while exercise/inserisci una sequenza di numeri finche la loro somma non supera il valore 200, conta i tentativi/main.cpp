#include <iostream>
using namespace std;
int main()
{
	int n, somma = 0, i=0, r=0;
	
	while (somma <= 200)
	{
		cout << "inserisci un numero: " << endl;
		cin >> n;
		somma = somma + n;

		if (r > 0)
		{
			cout << "il risultato e: " << somma << endl;
		}
		r++;
	}
	if (somma >= 200)
	{
		cout << "numero di tentativi: " << r;
	}
}
