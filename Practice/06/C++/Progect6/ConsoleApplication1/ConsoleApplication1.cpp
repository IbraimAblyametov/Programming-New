#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Эта программа вычисляет все действительные корни уравнения\n";
	cout << "a * x ^ 2 + b * x + c = 0\n";
	double a, b, c;
	cout << "Введите a\n";
	cin >> a;
	cout << "Введите b\n";
	cin >> b;
	cout << "Введите c\n";
	cin >> c;
	double D, x1, x2;
	if (a != 0) {
		D = (b * b) - (4 * a * c);
		if (D == 0) {
			x1 = -b / (2 * a);
			cout << x1 << " является единственным корнем этого уравнения\n";
		}

		if (D > 0) {
			x1 = (-b - sqrt(D)) / (2 * a);
			x2 = (-b + sqrt(D)) / (2 * a);
			cout << x1 << " и " << x2 << " являются кормями уравнения\n";
		}
		if (D < 0) { cout << "уранение не имеет решений\n"; }
	}
	else {
		x1 = (-c / b);
		cout << x1 << endl;
	}
	}