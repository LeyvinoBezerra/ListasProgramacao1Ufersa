#include <iostream>
using namespace std;

struct date
{
	short dia;
	short mes;
	short ano;
};

int DiasDeVida(date, date);

int main()
{
	date nasc, atual;

	cout << "Digite sua data de nascimento: ";
	cin >> nasc.dia >> nasc.mes >> nasc.ano;

	cout << "Digite a data de hoje: ";
	cin >> atual.dia >> atual.mes >> atual.ano;

	cout << "Voce tem " << DiasDeVida(nasc, atual) << " dias de vida." << endl;

	system ("pause");
	return 0;
}

int DiasDeVida(date passada, date hoje)
{
	const int DiasPorAno = 365;
	const int DiasPorMes = 31;

	int ini = (passada.ano * DiasPorAno) + (passada.mes * DiasPorMes) + passada.dia;
	int fim = (hoje.ano * DiasPorAno) + (hoje.mes * DiasPorMes) + hoje.dia;

	return fim - ini;
}
