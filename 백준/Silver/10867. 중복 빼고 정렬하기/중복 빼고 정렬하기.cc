#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<int> arr(n);

	for (int& i : arr) cin >> i;

	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int& i : arr) cout << i << " ";

	return 0;
}