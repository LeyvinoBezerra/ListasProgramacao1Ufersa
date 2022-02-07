#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int soma = 0;

	cout << "Digite um numero inteiro: "; 
	cin >> a;
	cout << "Digite outro numero inteiro: "; 
	cin >> b;

	int menor, maior;

	menor = a < b ? a : b;
	maior = a > b ? a : b; 

	for (int i= menor+1; i < maior; i++)
		soma += i;

	cout << "A soma de todos os valores entre " << a << " e " << b << ": " << soma << endl; 

	system("pause");
	return 0;
}