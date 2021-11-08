#include <iostream>
using namespace std;
int main()
{
	int num;
	int i = 0;
	int somma = 0;
	
	cout << "inserisci un numero: " << endl;
	cin >> num;

	while (i < num)
	{
		i++;
		somma = (somma + i);
	}
	cout << somma * 2;
}
