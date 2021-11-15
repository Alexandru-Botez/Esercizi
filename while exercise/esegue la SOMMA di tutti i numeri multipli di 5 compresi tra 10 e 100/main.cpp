#include <iostream>
using namespace std;
int main()
{
	int n, i = 10, somma=0;
	
	while (i < 100)
	{
		
		somma = somma + i;
		i += 5;
	}
	cout << "la somma e: " << somma;
}
