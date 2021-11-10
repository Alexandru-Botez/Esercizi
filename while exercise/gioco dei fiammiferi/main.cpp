#include <iostream>
using namespace std;

int main()
{
	int fiammiferiTotali = 1;
	int round = 0;
	int fiammiferiTolti;

	cout << "inserisci quanti fiammiferi vorresti nel gioco: ";
	cin >> fiammiferiTotali;

	while (fiammiferiTotali < 0)
	{
		cout << "ERRORE! immettere un numero positivo: ";
		cin >> fiammiferiTotali;
	}

	while (fiammiferiTotali > 0)
	{
		cout << "Quanti fiammiferi vuoi togliere: ";
		cin >> fiammiferiTolti;

		while (fiammiferiTolti < 0)
		{
			cout << "ERRORE! immettere un numero positivo: ";
			cin >> fiammiferiTolti;
		}
		
		round++;
		fiammiferiTotali = fiammiferiTotali - fiammiferiTolti;

		if (fiammiferiTotali < 0)
		{
			fiammiferiTotali = fiammiferiTotali + (-fiammiferiTotali);
		}
  
     cout << "Sono rimasti: " << fiammiferiTotali << endl;
	}
	if (round % 2 == 1)
	{
		cout << "hai perso giocatore 1!";
	}
	if (round % 2 == 0)
	{
		cout << "hai perso giocatore 2!";
	}
}
