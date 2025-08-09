#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, cnt = 0; cin >> n;
	int one, two;

	for (int i = 1; i <= n; i++) {
		if (i == 1000) {

		}
		else if (i < 100) {
			cnt++;
		}
		else if (i >= 100) { // 192
			one = (i / 100) - ((i / 10) % 10);
			two = ((i / 10) % 10) - (i % 10);
			if (one == two) cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}