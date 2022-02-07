#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << "Digite o nome de um arquivo fonte C++: "; 
	char fonte[40], dest[50];
	cin >> fonte;

	strcpy(dest, fonte);
	int t = strlen(fonte);
	dest[t-4] = '_';
	dest[t-3] = 'm';
	dest[t-2] = '.';
	dest[t-1] = 'c';
	dest[t+0] = 'p';
	dest[t+1] = 'p';
	dest[t+2] = '\0';
	
	ifstream fin;
	ofstream fout;

	fin.open(fonte);
	fout.open(dest);

	cout << "Gravando arquivo " << dest << "..." << endl;

	fout << "// " << dest << endl;
	fout << "#define print cout" << endl;
	fout << endl;

	char ch;
	char str[40] = {0};
	
	fin.get(ch);
	while (!fin.eof())
	{
		if (ch == 'c')
		{
			str[0] = ch;
			str[1] = fin.get();
			str[2] = fin.get();
			str[3] = fin.get();
			str[4] = '\0';	

			if (!strcmp(str, "cout"))
				fout << "print";
			else
				fout << str;
		}
		else
			fout << ch;

		fin.get(ch);
	}
	
	fin.close();
	fout.close();

	system("pause");
	return 0;
}