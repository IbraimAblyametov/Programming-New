#include <iostream>
#include <string>
#include "json.hpp"
#include <stdlib.h>
#include <fstream>
using namespace std;
int main()
{   setlocale(LC_ALL, "Russian");
	ifstream file;
	string Name = "\"Имя пользователя\":", completed = "\"завершено\":", True = "true";
	string in = "in.json", out = "out.json", l;
	int m = 0;
	file.open(in);
    while (!file.eof())
	{
		getline(file, l);
		if (l.find(Name) == 4)
		{
			int x = l.find(Name), u = l.find(',');
			int i = atoi(l.substr(x + Name.length(), u - x - Name.length()).c_str());
			if (i > m)
				m = i;
		}
	}
    int* mas = new int[m];
	for (int y = 0; y < m; y++)
	{
		mas[y] = 0;
	}
	file.close();
	file.open(in);
	if (!file.is_open())
	{
		cout << "Ошибка, файл не открылся!" << "\n";
	}
	else
	{
		int i = 0;
		while (!file.eof()) {
			getline(file, l);
			if (l.find(Name) == 4)
			{
				int z = l.find(Name), u = l.find(',');
				i = atoi(l.substr(z + Name.length(), u - z - Name.length()).c_str());
			}
			if (l.find(completed) == 4 && l.find("true") == 17)
			{
				mas [i - 1]++;
				i = 0;
			}
		}
	}
    ofstream fout;
	fout.open(out);
	int b = 0;
	fout << "[";
	for (int z1 = 0; z1 < m; z1++)
	{
		if (mas[z1] != 0) {
			if (b) {
				fout << ',';
			}
			fout << '\n';
			fout << "  {\n    \"Задача выполнена\": " << mas[b] << ",\n    \"Имя пользователя\" : " << b + 1 << "\n  }";
			b++;
		}
	}
	fout << "\n]";
	delete[] mas;
}
