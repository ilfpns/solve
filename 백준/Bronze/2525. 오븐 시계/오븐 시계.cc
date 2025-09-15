#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b; cin >> a >> b;
	int min = 0; cin >> min;

	int tmp = b + min;
	a += tmp / 60;
	b = tmp % 60;
	a %= 24;
	
	cout << a << " " << b;

	return 0;
}