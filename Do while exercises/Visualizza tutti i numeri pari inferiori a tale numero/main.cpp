#include <iostream>
using namespace std;
int main()
{

	int num;
	int divisori = 0;
	int i = 0;

	cout << "inserisci un numero: ";
	cin >> num;

	do
	{
		i++;
		divisori = i * 2;
		cout << "il numero pari inferiori sono: " << divisori << endl;
	} while (num > divisori + 2);
}
