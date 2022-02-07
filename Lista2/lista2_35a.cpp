#include <iostream>
using namespace std;

int main()
{
	cout << "Digite numeros inteiros (0 para finalizar)" << endl;
	
	int n;
	int soma = 0;
	int cont = 0;
	
	cin >> n;
	while (n != 0)
	{
		cont++;
		soma += n;
		cin >> n;
	}
	
	cout << "Foram lidos " << cont << " numeros" << endl;
	cout << "A soma dos numeros e " << soma << endl;
	cout << "A media e " << soma/float(cont) << endl;

	system("pause");
	return 0;
}
