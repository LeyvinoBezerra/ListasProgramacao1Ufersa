#include <iostream>
using namespace std;

union jogador
{
	char nome[5];
	int numero;
};

struct gol
{
	jogador jog;
	int hora, min;
};

int main()
{
	cout << "Quantos gols voce vai cadastrar? ";
	int tam;
	cin >> tam;

	gol * vetgols = new gol[tam];

	for (int i=0; i < tam; i++)
	{
		cout << "Jogador: "; 
		cin >> vetgols[i].jog.nome;
	}

	delete [] vetgols;

	system ("pause");
	return 0;
}
