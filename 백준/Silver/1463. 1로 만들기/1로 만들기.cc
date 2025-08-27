#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int d[10000001] = {};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int cnt = 0;
	int x; cin >> x;

	if (x == 0) {
		cout << '0' << endl;
		return 0;
	}
	d[0] = 0;	
	d[1] = 0;
	for (int i = 2; i <= x; i++) {
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0) d[i] = min(d[i], d[i / 2] + 1);	
		if (i % 3 == 0) d[i] = min(d[i], d[i / 3] + 1);
	}

	cout << d[x] << endl;
	return 0;
}