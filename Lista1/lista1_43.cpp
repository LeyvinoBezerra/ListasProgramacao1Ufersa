#include <iostream>
using namespace std;

double volumeCilindro(double alt, double r);

int main()
{
	cout << "Calcula o Volume de um Cilindro" << endl;
	cout << "-------------------------------" << endl;
	cout << "Entre com o raio da base: ";
	double raio;
	cin >> raio;

	cout << "Entre com a altura: ";
	double altura;
	cin >> altura;

	double volume = volumeCilindro(altura, raio);

	cout << fixed;
	cout.precision(3);
	cout << "O volume do cilindro e " << volume << endl;

	system("pause");
	return 0;
}

double volumeCilindro(double alt, double r)
{
	const double PI = 3.14159;

	return PI * r * r * alt;
}