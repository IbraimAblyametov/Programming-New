﻿#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	long long int a;
	cin >> a;
	if ((a == 2) or (a == 5) or (a == 7) or (a == 3)) {
	cout << a << " является простым числом\n"; }
	else if (a % 2 == 0 or a % 5 == 0 or a % 3 == 0 or a % 7 == 0) {
		cout << a << " является составным числом\n"; }
	else {
		cout << a << " является простым числом\n";
	}
}