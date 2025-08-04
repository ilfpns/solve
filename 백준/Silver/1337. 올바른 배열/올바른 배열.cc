#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int repeat = 0;
	int cnt = 1;
	cin >> repeat;

	vector<int> num_list(repeat);

	for (int& i : num_list) cin >> i;

	sort(num_list.begin(), num_list.end());

	for (int i = 0; i < repeat; i++) {
		int k = 1;
		for (int j = i + 1; j < i + 5; j++) {
			if (num_list[j] - num_list[i] < 5 && num_list[j] - num_list[i] > 0) k++;
		}
		cnt = max(cnt, k);
	}

	if (cnt >= 5) cout << 0;
	else cout << 5 - cnt << '\n';
}