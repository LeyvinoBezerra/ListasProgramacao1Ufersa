#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << "Digite um nome de arquivo existente: ";
	char arq[40];
	cin >> arq;

	ifstream fin;
	fin.open(arq);
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo " << arq << "..." << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	
	char str[40];
	int cont = 0;

	fin >> str;
	while (!fin.eof())
	{

		bool palind = true;
		for (int i = 0, j = strlen(str) - 1; i < int(strlen(str)/2); i++, j--)
		{
			if (tolower(str[i]) != tolower(str[j])) 
				palind = false;
		}

		if (palind)
		{
			cout << str << endl;
			cont++;
		}
	
		fin >> str;
	}

	fin.close();

	cout << "Foram encontrados " << cont << " palindromos neste arquivo." << endl;

	system("pause");
	return 0;
}