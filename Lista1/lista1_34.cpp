#include <iostream>
using namespace std;

int main()
{
	const float CiclismMETS = 7.0f;
	const float CorridaMETS = 7.0f;
	const float NatacaoMETS = 8.0f;

	cout << "Digite o seu peso (quilos): ";
	float peso;
	cin >> peso;

	cout << "Quanto tempo voce corre por semana? ";
	float corrida;
	cin >> corrida;

	cout << "Quanto tempo voce pedala por semana? ";
	float ciclismo;
	cin >> ciclismo;

	cout << "Quanto tempo voce nada por semana? ";
	float natacao;
	cin >> natacao;

	float energia;
	energia = CorridaMETS * peso * (corrida / 60);
	energia = energia + CiclismMETS * peso * (ciclismo / 60);
	energia = energia + NatacaoMETS * peso * (natacao / 60);

	cout << "Voce gasta por semana " << energia << " calorias." << endl;

	system("pause");
	return 0;
}