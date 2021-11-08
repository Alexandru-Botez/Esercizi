#include <iostream>
using namespace std;
int main()
{
	int n, st, n2, temp, i = 0;

	cout << "Inserisci un numero: " << endl;
	cin >> n;

	while (n >= 0 || n <= 0)
	{
		cout << "Inserisci secondo numero: " << endl;
		cin >> n2;

		if (i == 0)
		{
			st = n + n2;
		}
		
		if (i >= 1)
		{
			st = st + n2;
		}
		
		i++;

		cout << "la somma e: " << st << endl;
	}
	
}
