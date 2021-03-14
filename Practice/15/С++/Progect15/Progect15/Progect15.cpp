#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, l, o;
    for (int p = 1; p += 1;) {
		srand(time(0));
		n = rand() % 101;
		cout << "Отгадайте число.\n Вам дано 5 попыток.\n Введите число:\n";
		for (int i = 1; i <= 5; i += 1) {
			cin >> l;
			if (l == n) {
				cout << "\nПобеда! Вы угадали\n";
				cout << "\nНачать сначала? (1 - да )\n";
				cin >> o;
				if (o == 1)
					break;
				else return 0; }
			else if (i == 5) { 
				cout << "Поражение. Было загадано : "<< n << "\nНачать сначала? (1 - да)\n"; 
			    cin >> o; 
				if (o == 1) break;
				else return 0; }
			else if (n > l) { cout << "\nЗагаданное число больше\n"; }
			else if (i == 5) { 
				cout << "Поражение. Было загадано : " << n << "\n Начать сначала? (1 - да )\n";
				cin >> o; 
				if (o == 1) break;
				else return 0; }
			else cout << "\n Загаданное число меньше\n";
		}
	}
	system("pause");
	return 0;
}
