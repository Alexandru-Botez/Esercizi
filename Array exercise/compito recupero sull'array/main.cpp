
#include <iostream>
using namespace std;

int main()
{
    char scelta;
    int n;
    int vettore[15] = { 0 };
    int dim_logica = 0;
    int i, j=0;
    bool uguale;
    int pos;

    do {
        cout << "inserisci la tua scelta: ";
        cin >> scelta;

        switch (scelta)
        {
        case 'A':
        case 'a':

            cout << "inserisci un numero: ";
            cin >> n;
            dim_logica++;
            uguale = false;

            for (i = 0; i < dim_logica; i++)
            {
                if (vettore[i] == n) {
                    cout << "Errore!" << endl;
                    uguale = true;
                    dim_logica--;
                }

            }

            if (!uguale) {
                vettore[j] = n;
                j++;
            }    

                break;
            case 'B':
            case 'b':

                for (i = 0; i < dim_logica; i++) {
                    cout << "{" << vettore[i] << "} ";
                }

                cout << endl << endl;
            
                break;
            case 'C':
            case 'c':

                cout << "inserisci la posizione: ";
                cin >> pos;
                cout << "inserisci il numero";
                cin >> n;

                for (i = 0; i < dim_logica; i++)
                {
                    vettore[i] = 
                }

                break;
            case 'D':
            case 'd':


                break;
            case 'E':
            case 'e':
                break;
            case 'F':
            case 'f':
                break;
            case 'X':
            case 'x':
                cout << "sto chiudendo il programma";
                break;
            default:
                cout << "scegli una delle opzioni";
                break;
        }


    } while (scelta != 'X');
}
