#include <iostream>
using namespace std;

int main()
{
	int vet[10]={46,78,40,96,74,58,32,56,91,6};

	int *p1, *p2;

	p1 = &vet[0];
	p2 = &vet[1];

	for (int i=0; i < 10; i+=2)
	{
		cout << "[" << *p1 << "," << *p2 << "]" << endl;
		p1+=2;
		p2+=2;
	}

	cout << endl;
	system("pause");
	return 0;
}