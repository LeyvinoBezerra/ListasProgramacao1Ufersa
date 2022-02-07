#include <iostream>
using namespace std;

int main()
{
	const int MinPorHora = 60;

	cout << "Digite o horario de partida (HH MM): ";
	int h1, m1;
	cin >> h1 >> m1;

	cout << "Digite o horario de chegada (HH MM): ";
	int h2, m2;
	cin >> h2 >> m2;

	int min1 = h1 * MinPorHora + m1;
	int min2 = h2 * MinPorHora + m2;
	int diff = min2 - min1;

	int horas = diff / MinPorHora;
	int minut = diff % MinPorHora;

	cout << "O tempo total de viagem foi " << horas << " horas e " << minut << " min." << endl;

	system("pause");
	return 0;
}