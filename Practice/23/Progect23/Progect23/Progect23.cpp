#include <iostream>
#include "Синус.h"
#include "Фактериал.h"
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	for (int p = 0; ;p = p + 1) {
		cout << "Выдерите какое вычисление совершить:\n";
		cout << "1. Решить по формуле\n";
		cout << "2. Вычислить факториал\n";
		int o;
		cin >> o;
		if (o == 1) {
			int x, y;
			cout << "Введите a:\n";
			cin >> x;
			cout << "Введите b:\n";
			cin >> y;
			so4et(x, y);
			int otvet1 = so4et(x, y);
			cout << otvet1 << '\n';
		}
		if (o == 2) {
			int z;
			cout << "Введиде число:\n";
			cin >> z;
			int otvet = factor(z);
			cout << otvet << '\n';
		}
		else {
			return 0;
		}
	}
}
