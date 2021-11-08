#include <iostream>
using namespace std;
int main()
{
	int n, i = 0, maggiore = 0;

	while (i < 10)
	{
		cout << "Inserisci un numero " << endl;
		cin >> n;
		if (n > maggiore)
		{
			maggiore = n;
		}
		i++;
	}
	cout << "il maggiore e il seguente numero: " << maggiore << endl;
}
