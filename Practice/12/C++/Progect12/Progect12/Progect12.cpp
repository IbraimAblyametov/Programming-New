// Задание 12
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, i(1), d(2);
	cin >> a;
	while (d <= a) {
		i *= d;
		d += 1;
	}
	cout << "Ответ: " << i;
}