#include <iostream>
using namespace std;

int main()
{
	int m[5][5] = 
	{
		{3,1,5,5},
		{1,5,2,6},
		{2,3,4,5},
		{4,9,1,8}
	};
	
	int soma[4] = {0};

	for (int j=0; j<4; j++)
		for (int i=0; i<4; i++)
			soma[j] += m[i][j];

	cout << "Soma das colunas = ";
	for (int i=0; i<4; i++)
		cout << soma[i] << " ";
	
	cout << endl;
	system("pause");
	return 0;
}