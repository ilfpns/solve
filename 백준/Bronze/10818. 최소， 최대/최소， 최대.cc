#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long int m = 0;
	long long int n = 1e9;

	int r; cin >> r;
	vector<long long int> arr(r);

	for (long long int& i : arr) cin >> i;
	sort(arr.begin(), arr.end());

	cout << arr[0] << " " << arr[r - 1];

	return 0;
}