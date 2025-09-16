#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long int a; cin >> a;

	for (int i = 0; i < a; i++) {
		int b, q;
		cin >> b >> q;

		cout << q + b << '\n';
	}

	return 0;
}