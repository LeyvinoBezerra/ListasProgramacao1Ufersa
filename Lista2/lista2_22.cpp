#include <iostream>
using namespace std;

int main()
{
	char nome[40];
	cout << "Digite jogador/time: ";
	cin >> nome;

	int cont = 0;
	while (nome[cont] != '/')
		cont++;

	char * ptchar = &nome[cont+1];
	
	cout << "O nome do jogador tem " << cont << " letras." << endl;
	cout << "O seu time e o " << ptchar << "." << endl;
	
	system("pause");
	return 0;
}