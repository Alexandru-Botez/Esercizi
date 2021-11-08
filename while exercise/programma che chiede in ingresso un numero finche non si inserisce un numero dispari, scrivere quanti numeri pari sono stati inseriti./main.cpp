#include <iostream>
using namespace std;
int main()
{	
	int num = 0;
	int round = -1;

	while (num % 2 == 0)
	{
		cout << "inserisci un numero: ";
		cin >> num;
		
		round++;

	}
	if (num % 2 == 1)
	{
		cout << "sono stati inseriti " << round << " numeri pari";
	}
}
