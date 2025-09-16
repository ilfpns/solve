#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long int a; cin >> a;

	for (int i = 1; i < a+1; i++) {
		int b, q;
		cin >> b >> q;

		cout << "Case #" << i << ": " << b << " + " << q << " = " << q + b << '\n';
	}

	return 0;
}