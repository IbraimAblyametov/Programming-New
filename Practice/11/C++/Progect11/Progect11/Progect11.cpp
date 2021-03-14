// Задание 11. 
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int b, l, t(1); // b - число возводимое в степень, l - сама степень
	cin >> b >> l; // 
	if (l < 0) {
		while (-l > 0)
		{
			t *= b;
			l -= -1;
		}
		b = 1 / t; cout << t;
	}
	else if (l > 0) {
		while (l >= 1)
		{
			t *= b;
			l -= 1;
		}
		cout << t;
	}
	else if (l == 0) { cout << "Ответ: 1\n"; }