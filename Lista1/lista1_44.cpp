#include <iostream>
#include <cmath>
using namespace std;

int absoluto(int);

int main()
{
	cout << "Digite um numero inteiro: ";
	int num;
	cin >> num;

	cout << "O valor absoluto e " << absoluto(num) << endl;
	
	system("pause");
	return 0;
}

int absoluto(int n)
{
	return int(sqrt(pow(float(n),2)));
}