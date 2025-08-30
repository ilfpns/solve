#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m; cin >> n;

	vector<int> arr(n);
	for (int& i : arr) cin >> i;

	cin >> m;
	vector<int> com(m);
	for (int& i : com) cin >> i;

	sort(arr.begin(), arr.end());

	for (int i = 0; i < m; i++) {
		if (binary_search(arr.begin(), arr.end(), com[i])) cout << 1 << '\n';
		else cout << 0 << '\n';
	}


	return 0;
}	