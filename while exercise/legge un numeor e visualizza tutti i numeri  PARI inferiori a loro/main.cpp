#include <iostream>
using namespace std;
int main()
{
	int n;
	int round = 2;

	cout << "inserisci un numero: ";
	cin >> n;

	while ( n > round)
	{
		cout << round << endl;
		round = round + 2;
	}
}
