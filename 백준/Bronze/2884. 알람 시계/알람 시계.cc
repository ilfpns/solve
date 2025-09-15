#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b; cin >> a >> b;

	int left = b - 45;

	if (a == 0 && left < 0) cout << 23 << " " << 60 + left;
	else if (left >= 0) cout << a << " " << left;
	else cout << a - 1 << " " << 60 + left;

	return 0;
}