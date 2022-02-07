#include <iostream>
using namespace std;

int main()
{
	const int DiasPorAno = 365;
	const float CigarrosPorCarteira = 20.0f;

	cout << "A quantos anos voce fuma? "; 
	int anos;
	cin >> anos;

	cout << "Quantos cigarros voce fuma por dia? ";
	int cigarros;
	cin >> cigarros;

	cout << "Qual o preco medio de uma carteira de cigarros? ";
	float preco;
	cin >> preco;

	float gasto = (anos * DiasPorAno * cigarros) / CigarrosPorCarteira * preco;

	cout << "Voce gastou ate agora R$ " << gasto << " com cigarros." << endl;

	system("pause");
	return 0;
}