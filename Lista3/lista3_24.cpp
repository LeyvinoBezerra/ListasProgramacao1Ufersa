#include <iostream>
using namespace std;

int main()
{
	cout << "Digite uma frase (@ para finalizar):\n"; 
	
	char ch;
	int vogais[5] = {0};

	while ((ch = cin.get()) != '@')
	{
		switch (ch)
		{
		case 'a': 
		case 'A': vogais[0]++; break;
		case 'e':
		case 'E': vogais[1]++; break;
		case 'i': 
		case 'I': vogais[2]++; break;
		case 'o': 
		case 'O': vogais[3]++; break;
		case 'u': 
		case 'U': vogais[4]++; break;
		}
	}
	
	cout << "a:" << vogais[0] << endl;
	cout << "e:" << vogais[1] << endl;
	cout << "i:" << vogais[2] << endl;
	cout << "o:" << vogais[3] << endl;
	cout << "u:" << vogais[4] << endl;

	system("pause");
	return 0;
}