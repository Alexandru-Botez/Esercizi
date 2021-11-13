#include <iostream>
using namespace std;
int main()
{

	int  i = 10;
	int somma = 0;
	
	do 
	{
		somma = somma + i;
		i = i + 5;

	} while (i < 101);

	cout << somma;
}
