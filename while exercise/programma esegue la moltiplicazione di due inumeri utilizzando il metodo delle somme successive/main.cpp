#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	int somma = 0;
	int i = 0;
	

	cout << "inserisci un primo numero: ";
	cin >> num1;
	cout << "inserisci un secondo numero: ";
	cin >> num2;

	while (i < num1)
	{
		somma = somma + num2;
		i++;
	}
	cout << somma;
}
