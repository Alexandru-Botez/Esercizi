#include <iostream>
using namespace std;
int main() {

	int a, b, c; 
  
	cout << "Inserisci tre numeri interi" << endl;
	cin >> a >> b >> c;

  if (a > b) {
		if (a > c) {
			cout << "il numero piu' grande e' " << a;
		}
		else {
			cout << "il numero piu' grande e' " << c;
		}
	}
	else {
		if (b > c)
			cout << "il numero piu' grande e' " << b;
		}
		else {
			cout << "il numero piu' grande e' " << c;
		}
	}
	return 1;
}
