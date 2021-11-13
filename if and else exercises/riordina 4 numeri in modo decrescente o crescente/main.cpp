#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4, temp;

	cout << "inscerisci il primo numero: " << endl;
	cin >> num1;
	cout << "inscerisci il secondo numero: " << endl;
	cin >> num2;
	cout << "inscerisci il terzo numero: " << endl;
	cin >> num3;
	cout << "inscerisci il quarto numero: " << endl;
	cin >> num4;

	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num1 > num3)
	{
		temp = num1;
		num1 = num3;
		num2 = temp;
	}
	if (num1 > num4)
	{
		temp = num1;
		num1 = num4;
		num4 = temp;
	}
	if (num2 > num3)
	{
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	if (num2 > num4)
	{
		temp = num2;
		num2 = num4;
		num4 = temp;
	}
	if (num3 > num4)
	{
		temp = num3;
		num3 = num4;
		num4 = temp;
	}

	cout << "inscerisci i numeri ordinati " << endl;
	cout << num4 << endl;
	cout << num3 << endl;
	cout << num2 << endl;
	cout << num1 << endl;
  
  return 0;
}
