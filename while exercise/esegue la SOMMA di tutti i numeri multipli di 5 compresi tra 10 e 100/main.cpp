#include <iostream>
using namespace std;
int main()
{
	int n, i = 10, somma=5;
	
	while (i < 101)
	{
		
		somma = somma + i;
		i = i + 5;
	}
	cout << "la somma e: " << somma;
}
