#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int h1, h2, m1, m2, i1, i2, f;
	char a;
	cin >> h1 >> a >> m1;
	cin >> h2 >> a >> m2;
	if ((0 < h1) & (h1 < 23)) {
		if ((0 < h2) & (h2 < 59)) {
			if ((0 < m1) & (m1 < 59)) {
				if ((0 < m2) & (m2 < 59)) {
					i1 = 60 * h1 + m1;
					i2 = 60 * h2 + m2;
					f = i1 - i2;
					if (f > 15) {
						cout << "Встреча не состоится\n";
					}
					else if (f < -15) { cout << "Встреча не состоится\n"; }
					else { cout << "Встреча состоится\n"; }
				}
				else { cout << "Ошибка, введите корректное время\n"; }
			}
			else { cout << "Ошибка, введите корректное время\n"; }
		}
		else { cout << "Ошибка, введите корректное время\n"; }
	}
	else { cout << "Ошибка, введите корректное время\n"; }
}