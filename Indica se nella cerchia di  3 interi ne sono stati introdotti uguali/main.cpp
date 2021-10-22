#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "inserisci il primo numero" << endl;
	cin >> num1;
	cout << "inserisci il secondo numero" << endl;
	cin >> num2;
	cout << "inserisci il terzo numero" << endl;
	cin >> num3;

	if (num1 == num2 || num1 == num3)
	{
		cout << "E stato introdotto numeri uguali";
	}
	else
	{
		cout << "Non e stato introdotto numeri uguali";
	}

	return(0);
}
