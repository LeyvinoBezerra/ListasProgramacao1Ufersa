#include <iostream>
using namespace std;

int main()
{
	char ch;
	int subst = 0;

	cout << "Digite um texto (# para finalizar):" << endl; 

	while ((ch = cin.get()) != '#')
	{
		if (ch == '.')
		{
			cout << '!';
			subst++;
		}
		else if (ch == '!')
		{
			cout << "!!";
			subst++;
		}
		else
			cout << ch;
	}

	cout << "\nSubstituicoes: " << subst << endl;

	system("pause");
	return 0;
}