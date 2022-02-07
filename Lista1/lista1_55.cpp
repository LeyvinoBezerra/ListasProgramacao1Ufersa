#include <iostream>
using namespace std;

int main()
{
	const int MetrosEmKm = 1000;

	cout << "Entre com a distancia em metros: ";
	int metros;
	cin >> metros;

	cout << metros << " metros equivalem a " << metros/MetrosEmKm;
	cout << " quilometros e " << metros%MetrosEmKm << " metros." << endl; 

	system("pause");
	return 0;
}