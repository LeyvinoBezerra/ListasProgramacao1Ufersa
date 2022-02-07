#include <iostream>
using namespace std;

int main()
{
	cout << "Digite numeros inteiros (0 para finalizar)" << endl;
	
	int n;
	int soma = 0;
	int cont = 0;
	
	do
	{
		cin >> n;
		cont++;
		soma += n;
	} while (n != 0);
	
	cont--; // loop contou com o zero

	cout << "Foram lidos " << cont << " numeros" << endl;
	cout << "A soma dos numeros e " << soma << endl;
	cout << "A media e " << soma/float(cont) << endl;

	system("pause");
	return 0;
}
