#include <iostream>
using namespace std;

int main()
{
	int x, *p, **q;
	p = &x;      // p aponta para x (contem o endereco de x)
	q = &p;      // q aponta para p (contem o endereco de p)
	x = 10;      // x recebe o valor 10, *p e **q tamb�m tem valor 10 

	cout << **q; // q � um ponteiro que aponta para outro ponteiro
	             // para obter o valor � preciso aplicar a indire��o duas vezes

	cout << endl;
	system("pause");
	return 0;
}