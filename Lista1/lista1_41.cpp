#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14159f;

	cout << "Digite um angulo: ";
	double angDeg;
	cin >> angDeg;

	// angulo em radianos = angulo em graus * PI / 180
	double angRad = angDeg * PI / 180.0;

	cout << "O seno deste angulo = " << sin(angRad) << endl;

	system("pause");
	return 0;
}