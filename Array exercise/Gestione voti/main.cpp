#include <iostream>
using namespace std;
int main()
{
	// dichiarazizone delle variabili
	float voto;
	char materia;
	int vetVoto[100];
	char vetMateria[100];
	int i = 0, j;
	float media, somma = 0;
	int cont = 0;

	do
	{
		// inserimento dati
		cout << "Inserisci la materia: ";
		cin >> materia;
		cout << "inserisci il voto da 1 a 10: ";
		cin >> voto;

		// controllo se il valore e tra 1 a 10
		while (voto < 0 || voto > 10)
		{
			cout << "inserisci il voto da 1 a 10: ";
			cin >> voto;
		}

		if(voto!=0 && materia != 'x'){
		
			// inserisco i dati nel vettore e definisco la variabile i come dimensione logica del vettore
			vetMateria[i] = materia;
			vetVoto[i] = voto;
			i++;
		}
	} while (voto != 0 && materia != 'x');

	cout << "Quale materia vuoi la media?: ";
	cin >> materia;

	for (j = 0; j<i  ; j++)
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
	cout << "la media dei voti e: " << media;
}
