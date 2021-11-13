#include <iostream>
using namespace std;
int main()
{

	int num;
	int conta_null = 0;
	int conta_zero = 0;

	cout << "inserisci un numero: ";
	cin >> num;

	do
	{
		cout << "inserisci un numero: ";
		cin >> num;

		if (num > 0)
		{
			conta_null++;
		}
		if (num == 0)
		{
			conta_zero++;
		}
	} while (num >= 0);

	cout << "I numeri negativi sono: " << 1 << endl;
	cout << "I numeri positivi sono: " << conta_null << endl;
	cout << "I numeri nulli sono: " << conta_zero << endl;
}
