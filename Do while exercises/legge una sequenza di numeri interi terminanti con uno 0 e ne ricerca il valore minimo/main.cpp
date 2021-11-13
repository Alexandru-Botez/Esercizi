#include <iostream>
using namespace std;
int main()
{

	int num;
	int min = 0;

	do
	{
		cout << "inserisci un numero: ";
		cin >> num;

		if (num > 0 && (min == 0 || min > num))
			min = num;

	} while (num != 0 && num > 0);

	if (num > 0)
		cout << "il numero minore e': " << min;
}
