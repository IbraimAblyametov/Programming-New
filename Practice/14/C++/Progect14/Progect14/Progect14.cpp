#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long int a, t, z;
	cin >> z;
	t = 2;
	a = 0;
	while (t <= z) {
		a++;
		t = 2;
		t = pow(t, a);
	}
	if (z == 0)
		cout << '0';
	else if (z == 1)
		cout << '1';
	else if (z == 2)
		cout << '2';
	else
		cout << a;

}
