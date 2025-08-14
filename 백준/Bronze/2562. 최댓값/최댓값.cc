#include <iostream>
using namespace std;

int main() {
	int max = -1, a = 0, b;

	for (int i = 0; i < 9; i++) {
		cin >> a;
		if (a > max) {
			max = a;
			b = i;
		}
	}
	cout << max << endl << b+1;
}