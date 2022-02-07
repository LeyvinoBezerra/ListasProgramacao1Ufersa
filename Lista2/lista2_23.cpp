#include <iostream>
using namespace std;

int main()
{
	char p1[80];
	char p2[80];
	char p3[80];
	char p4[80];

	cout << "Digite 4 palavras:\n";
	cin >> p1 >> p2 >> p3 >> p4;

	char * palavra = new char[strlen(p1)+strlen(p2)+strlen(p3)+strlen(p4)+1];

	int j=0;
	for (int i=0; i < strlen(p1); i++)
		palavra[j++] = p1[i];
	for (int i=0; i < strlen(p2); i++)
		palavra[j++] = p2[i];
	for (int i=0; i < strlen(p3); i++)
		palavra[j++] = p3[i];
	for (int i=0; i < strlen(p4); i++)
		palavra[j++] = p4[i];
	palavra[j] = '\0';

	cout << "Concatenando as palavras obtem-se: " << endl;
	cout << palavra << endl;

	delete palavra;
	
	system("pause");
	return 0;
}