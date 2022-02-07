#include <iostream>
using namespace std;

int main()
{
	int vet1[5];
	int vet2[5];

	int soma[5];

	cout << "Digite 10 valores inteiros:" << endl;
	for (int i=0; i < 5; i++)
		cin >> vet1[i];
	for (int i=0; i < 5; i++)
		cin >> vet2[i];

	cout << "A soma dos vetores:" << endl;
	for (int i=0; i < 5; i++)
	{
		soma[i] = vet1[i] + vet2[i];
		cout << soma[i] << " "; 
	}
	
	cout << endl;
	system("pause");
	return 0;
}