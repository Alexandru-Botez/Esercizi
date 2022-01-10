#include <iostream>
using namespace std;

int main()
{
	char scelta;
	float voto;
	char materia;
	int valutazioni;
	int vetVoto[100];
	char vetMateria[100];
	int i = 0;
	int j;
	float media, somma = 0;
	int cont = 0;
	
	do
	{
		cout << "MENU OPZIONI" << endl;
		cout << "Scegli 'N' per inserire valutazioni" << endl;
		cout << "Scegli 'S' per stampare i voti e materie" << endl;
		cout << "Scegli 'V' per inserire un ulteriore voto" << endl;
		cout << "Scegli 'M' per stampare la media di una materia" << endl;
		cout << "Scegli 'C' per cancellare l'intero array" << endl;
		cout << "Scegli 'R' per cancellare l'indice di un voto" << endl;
		cout << "scegli 'X' per terminare il programma" << endl;
		cin >> scelta;

		switch (scelta)
		{
			case 'N':
				cout << "Quante valutazioni vuoi inserire?: ";
				cin >> valutazioni;

				while(valutazioni > 0)
				{
					cout << "Inserisci la materia: ";
					cin >> materia;
					cout << "inserisci il voto da 1 a 10: ";
					cin >> voto;

					while (voto < 0 || voto > 10)
					{
						cout << "inserisci il voto da 1 a 10: ";
						cin >> voto;
					}
					// inserisco i dati nel vettore e definisco la variabile i come dimensione logica del vettore
					vetMateria[i] = materia;
					vetVoto[i] = voto;
					i++;
			
					valutazioni--;
				}
				break;
			case 'S':
				for (j = 0; j < i; j++)
				{
					cout << vetMateria[j] << "   ";
				}

				cout << endl;

				for (j = 0; j < i; j++)
				{
					cout << vetVoto[j] << "   ";
				}	

				cout << endl;
				break;
			case 'V':
				cout << "Inserisci la materia ";
				cin >> materia;
				cout << "inserisci il voto da 1 a 10: ";
				cin >> voto;

				while (voto < 0 || voto > 10)
				{
					cout << "inserisci il voto da 1 a 10: ";
					cin >> voto;
				}
				// inserisco i dati nel vettore e definisco la variabile i come dimensione logica del vettore
				vetMateria[i] = materia;
				vetVoto[i] = voto;
				i++;
				break;
			case 'M':
				cont = 0;
				
				cout << "Quale materia vuoi la media?: ";
				cin >> materia;

				for (j = 0; j < i; j++)
				{
					// controllo se tra la materia richiesta e quella nel vetMateria sono uguali
					if (vetMateria[j] == materia)
					{
						// calcola la media se sono uguali tra di loro
						cont++;
						somma = somma + vetVoto[j];
					}
				}

				media = somma / cont;
				cout << "la media dei voti e: " << media << endl;
				break;
			case 'C':
				i=0;
				cout << "Ho cancellato l'array" << endl;
				break;
			case 'R':
				cout << "Scegli il voto che vuoi eliminare inserendo l'indice: ";
				cin >> j;
				
				for (cont = 0; cont < i;cont++)
				{
					if (cont == j)
					{
						for(cont; cont < i; cont++)
						{
							vetMateria[cont] = vetMateria[cont+1];
							vetVoto[cont] = vetVoto[cont+1];
						}
						i--;
					}
				}
				break;
			case 'X':
				cout << "Sto chiudendo il programma...";
				break;
		}
	} while (scelta != 'X');
}
