#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float x;
	float x0;
	float v0;
	float t;
	double a = 9.8;
	cout << "Форма для вычисления x = x0 + v0 * t + a * t * t/2\n";
	cout << "Введите сначало x0, затем v0 и потом t\n";
	cin >> x0 >> v0 >> t;
	x = x0 + v0 * t + a * t * t / 2;
	cout << x;
}