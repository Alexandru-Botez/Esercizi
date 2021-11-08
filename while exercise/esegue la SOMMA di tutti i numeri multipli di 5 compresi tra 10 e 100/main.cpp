#include <iostream>
using namespace std;
int main()
{
	int n, i = 10, somma=5;
	
	while (i <= 100)
	{
		i = i + 5;
		somma = somma + i;
	}
	cout << "la somma e: " << somma;
}
