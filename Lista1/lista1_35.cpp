#include <iostream>
using namespace std;

int main()
{
	cout << "Digite o custo de fabrica do carro: ";
	float custoDeFabrica;
	cin >> custoDeFabrica;

	float custoAoConsumidor;
	custoAoConsumidor = custoDeFabrica + (custoDeFabrica * 0.45) + (custoDeFabrica * 0.28);
	cout << "O custo ao consumidor = " << custoAoConsumidor << endl;

	system("pause");
	return 0;
}