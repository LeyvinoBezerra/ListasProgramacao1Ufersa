#include <iostream>
using namespace std;

float media(int, int);

int main()
{
	cout << "Digite um numero inteiro: ";
	int x;
	cin >> x;

	cout << "Digite outro valor inteiro: ";
	int y;
	cin >> y;

	cout << "A media dos numeros e " << media(x,y) << endl;

	system("pause");
	return 0;
}

float media(int a, int b)
{
	return (float (a) + float (b)) / 2;
}