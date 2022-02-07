#include <iostream>
using namespace std;

int main()
{
	cout << "Digite um numero real: ";
	float real;
	cin >> real;

	cout << "A parte inteira: " << int(real) << endl;
	cout << "A parte fracionaria: " << real - int(real) << endl;

	system("pause");
	return 0;
}