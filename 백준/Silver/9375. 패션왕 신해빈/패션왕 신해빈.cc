#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int r; cin >> r;

	while (r--) {
		unordered_map<string, int> arr;

		int m; cin >> m;

		for (int i = 0; i < m; i++) {
			string name, type;

			cin >> name >> type;
			arr[type]++;
		}

		int result = 1;
		for (auto& i : arr) {
			result *= (i.second + 1);
		}

		cout << result - 1 << endl;
	}

	return 0;
}