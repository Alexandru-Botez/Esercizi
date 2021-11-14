#include <iostream>
using namespace std;
int main()
{

	int num;
	cout << "Inserisci un numero da 1 a 20: ";
	cin >> num;

	while (num > 20 || num < 0)
	{
		cout << "immettere solamente un numero tra 1 e 20!: ";
		cin >> num;
	}
	do
	{
		num -= 1;
		cout << num << " ";
	} while (num > 0);
	cout << "FINE!";
}
