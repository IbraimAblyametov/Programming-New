//Задание номер 8. Кальтулятор
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите первое число (нажмите Enter)\n";
	double a;
	cin >> a;
	cout << "Введите второе число (нажмите Enter)\n";
	double b;
	cin >> b;
	cout << "Выберите операцию:\n";
	double x;
	cout << "1.Сложение\n";
	cout << "2.Вычитание\n";
	cout << "3.Умножение\n";
	cout << "4.Деление\n";
	double y;
	cin >> x;
	if (x == 1) {
		cout << "Ответ: ";
		y = a + b;
		cout << y << endl;
	}
	if (x == 2) {
		cout << "Ответ: ";
		y = a - b;
		cout << y << endl;
	}
	if (x == 3) {
		cout << "Ответ: ";
		y = a * b;
		cout << y << endl;
	}
	if (x == 4) {
		cout << "Ответ: ";
		y = a / b;
		cout << y << endl;
	}
	
}