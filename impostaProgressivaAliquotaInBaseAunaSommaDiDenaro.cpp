
#include <iostream>
using namespace std;

int main()
{
	float sommaDenaro, impostaT, importo;
	const float tax1 = 200;
	const float tax2 = 800;
	const float tax3 = 1800;
	const float tax4 = 2400;
	
	cout << "Inserisci la tua somma di denaro: " << endl;
	cin >> sommaDenaro;


	if (sommaDenaro < 5000) {
		impostaT = sommaDenaro * 5 / 100;
	}
	else if (sommaDenaro >= 5001 && sommaDenaro <= 15000) {
		impostaT = (sommaDenaro - 5001) * 8 / 100 + tax1;
		importo = sommaDenaro + impostaT;
	}
	else if (sommaDenaro >= 15001 && sommaDenaro <= 25000) {
		impostaT = (sommaDenaro - 15001) * 18 / 100 + tax1 + tax2;
		importo = sommaDenaro + impostaT;
	}
	else if (sommaDenaro >= 25001 && sommaDenaro <= 35000) {
		impostaT = (sommaDenaro - 25001) * 24 / 100 + tax1 + tax2 + tax3;
		importo = sommaDenaro + impostaT;
	}
	else {
		impostaT = (sommaDenaro - 35000) * 36 / 100 + tax1 + tax2 + tax3 + tax4;
		importo = sommaDenaro + impostaT;
	}

	cout << "la tua imposta: " << impostaT << " euro" << endl;
	cout << "devi pagare: " << importo << " euro" << endl;

	return (0);
}

