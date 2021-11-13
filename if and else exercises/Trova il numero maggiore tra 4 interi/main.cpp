#include <iostream>
using namespace std;

//int main()
//{
//	int a, b, c, d; 
//	int smallest;
//
//	cout << "inserisci tre numeri " << endl;
//	cin >> a >> b >> c >> d;
//
//	if (a > b && a > c && a > d) {
//
//		if (b < c && b < d) {
//			smallest = b;
//		}
//		else if (c < b && c < d) {
//			smallest = c;
//		}
//		else if (d < b && d < c) {
//			smallest = d;
//		}
//
//		cout << "the biggest numeber is: " << a << endl;
//		cout << "the smallest number is: " << smallest << endl;
//
//	}
//	else if (b > a && b > d && b > c) {
//
//		if (a < c && a < d) {
//			smallest = a;
//		}
//		else if (c < a && c < d) {
//			smallest = c;
//		}
//		else if (d < a && d < c) {
//			smallest = d;
//		}
//
//		cout << "the biggest numeber is: " << b << endl;
//		cout << "the smallest number is: " << smallest << endl;
//	}
//	else if (c > a && c > b && c > d) {
//
//		if (a < d && a < b) {
//			smallest = a;
//		}
//		else if (b < a && b < d) {
//			smallest = b;
//		}
//		else if (d < a && d < b) {
//			smallest = d;
//		}
//
//		cout << "the biggest numeber is: " << c << endl;
//		cout << "the smallest number is: " << smallest << endl;
//	}
//	else if (d > a && d > b && d > c) {
//		
//		if (a < b && a < c) {
//			smallest = a;
//		}
//		else if (b < a && b < c) {
//			smallest = b;
//		}
//		else if (c < a && c < b) {
//			smallest = c;
//		}
//		
//		cout << "the biggest numeber is: " << d << endl;
//		cout << "the smallest number is: " << smallest << endl;
//	}
//}

int main() {

	int a, b, c, d;
	int smallest, biggest;

	cout << "Enter four integers: " << endl;
	cin >> a >> b >> c >> d;

	biggest = smallest = a;
	
	if (biggest < b) {
		biggest = b;
	}
	else if (b < smallest) {
		smallest = b;
	}
	if (biggest < c) {
		biggest = c;
	}
	else if (c < smallest) {
		smallest = c;
	}
	if (biggest < d) {
		biggest = d;
	}
	else if (d < smallest) {
		smallest = d;
	}

	cout << "the biggest number is: " << biggest << endl;
	cout << "the smallest number is: " << smallest << endl;

	return(0);

}
