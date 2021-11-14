#include <iostream>
using namespace std;
int main()
{
	int num;
	int i = 1;

	cout << "inserisci un numero: ";
	cin >> num;

	while (i < num)
	{
		if (num % i == 0)
		{
			cout << i << endl;
		}

		i++;
	}
}
