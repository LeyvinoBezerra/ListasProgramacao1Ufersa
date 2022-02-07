#include <iostream>
using namespace std;

enum mes {SEG, TER, QUA, QUI, SEX, SAB, DOM};

int main()
{
	char semana[7][10] = {"Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"};
	
	for (mes ind = SEG; ind <= DOM; ind = mes(ind + 1))
		cout << semana[ind] << endl;
	
	system("pause");
	return 0;
}