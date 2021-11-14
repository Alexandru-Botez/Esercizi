#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int dado1, dado2, lanci = 1;
	srand(time(NULL));

	do 
	{
		dado1 = (rand() % 6) + 1;
		dado2 = (rand() % 6) + 1;

		cout << "risultato del dado primo e: " << dado1 << endl;
		cout << "risultato del dado secondo e: " << dado2 << endl;

		lanci--;
	} while (0 < lanci);
}
