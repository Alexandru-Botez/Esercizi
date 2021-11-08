#include <iostream>
using namespace std;


int main()
{	
	int num = 1, min = 256*256;

	while (num > 0)
	{
		cout << "inserisci un numero: ";
		cin >> num;
		if (num > 0 && num < min)
		{
			min = num;
		}
	}

	cout << "il numero minimo e : " << min;


	return 0;
}
