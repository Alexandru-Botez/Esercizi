#include <iostream>
using namespace std;
int main()
{
	int num = 1, round = 0;
	float risultato = 0, media = 0;


	while (num > 0)
	{
		cout << "inserisci un numero: " << endl;
		cin >> num;

		round++;
		media = media + num;
		risultato = media / round;

		if (round > 1)
			cout << "la media tra questi numeri e: " << risultato << endl;
	}
  return 0;
}
