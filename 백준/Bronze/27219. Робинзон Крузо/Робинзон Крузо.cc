#include <iostream>
using namespace std;

int main() {
	int a = 0;
	cin >> a;

	int v_num = 0;
	v_num = a / 5;
	a %= 5;

	for (int i = 0; i < v_num; i++) {
		cout << "V";
	}


	for (int i = 0; i < a; i++) {
		cout << "I";
	}

	return 0;
}