#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_set>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a; cin >> a;
	vector<int> arr(a);

	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());
	for (int& i : arr) cout << i << '\n';
	return 0;
}