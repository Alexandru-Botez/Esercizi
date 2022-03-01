#include <iostream>
using namespace std;

int main()
{
	char scelta;
	char carattere;
	int lunghezza1 = 0, lunghezza2 = 0;
	int i = 0, j = 0;
	int contatore = 0;
	char stringa[100];
	char stringa2[100];
	char maggiore;
	bool uguali = true;
	bool substringa = false;


	do
	{

		cout << "Inserisci uno di questi caratteri per eseguire una funzione" << endl;
		cout << "S - l'utente inserisci una stringa: " << endl;
		cout << "L - il programma stampa la lunghezza: " << endl;
		cout << "C - l'utente inserisce un carattere e il programma stampa quante volte quel carattere e' ripetuto nella stringa: " << endl;
		cout << "U - l'utente inserisce una seconda stringa e il programma dice se le due stringhe sono uguali o no" << endl;
		cout << "A - l'utente inserisce una seconda stringa e il programma la unisce alla prima stringa, separa da uno spazio" << endl;
		cin >> scelta;

		switch (scelta)
		{
		case 'S':
		case 's':
			cout << "inserici una stringa: ";
			cin >> stringa;

			for (i = 0; stringa[i] != '\0'; i++)
			{
				lunghezza1++;
			}

			break;
		case 'L':
		case 'l':

			cout << "la lunghezza della stringa e: " << lunghezza1 << endl;

			break;
		case 'C':
		case 'c':
			cout << "inserici un carattere: ";
			cin >> carattere;

			for (i = 0; stringa[i] != '\0'; i++)
			{
				if (carattere == stringa[i])
				{
					contatore++;
				}
			}
			cout << "il carattere " << carattere << " e' stato ripetuto " << contatore << " volte" << endl;
			break;
		case 'U':
		case 'u':
			uguali = true;

			cout << "inserisce una seconda stringa: ";
			cin >> stringa2;

			// Conto la lunghezza della seconda stringa
			for (i = 0; stringa2[i] != '\0'; i++)
			{
				lunghezza2++;
			}

			if (lunghezza1 != lunghezza2)
			{
				uguali = false;
			}
			else
			{
				for (i = 0; i < lunghezza1; i++)
				{
					if (stringa[i] != stringa2[i])
					{
						uguali = false;
					}
					
				}
			}
			if (uguali == false)
			{
				cout << "le stringhe non sono uguali " << endl;
			}
			else
			{
				cout << "le stringhe sono uguali" << endl;
			}
			break;
		case 'A':
		case 'a':
			lunghezza2 = 0;
			
			cout << "inserisce una seconda stringa: ";
			cin >> stringa2;
		
			for (i = 0; stringa2[i] != '\0'; i++)
			{
				lunghezza2++;
			}
			
			
			stringa[lunghezza1] = ' ';
			lunghezza1++;
			
			for (i = 0; i <= lunghezza2; i++)
			{
				stringa[lunghezza1+i] = stringa2[i];	
			} 
			
		
			cout << stringa << endl;
		case 'b':
		case 'B':
			lunghezza2 = 0;
			contatore = 0;
	
			
			cout << "inserisce una seconda stringa: ";
			cin >> stringa2;
		
			for (i = 0; stringa2[i] != '\0'; i++)
			{
				lunghezza2++;
			}
			
			
			for (i = 0; i < lunghezza1;i++)
			{
				if (stringa[i] == stringa2[j])
				{
					j++;
				}
				else
					if (j > 0)
					{
						j = 0;
						i--;
					}
					
				if (stringa[j] == '\0')
				{
					substringa = true;
				}
			}
			
			if (substringa == true)
				cout << "e una substringa";
			else
				cout << "non e una substringa";
			
			break;
			
		}

		system("PAUSE");
		system("CLS");

	} while (scelta != 'X');
}
