#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b; cin >> a >> b;

	if (a > 0 && b > 0) {
		cout << 1;
	}
	else if (a > 0 && b < 0) {
		cout << 4;
	}
	else if (a < 0 && b < 0) {
		cout << 3;
	}
	else {
		cout << 2;
	}

	return 0;
}