#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int a; cin >> a;
	vector<string> arr(a);

	for (string& i : arr) cin >> i;

	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = 0; j < arr.size() - i - 1; j++) {
			if (arr[j].length() > arr[j + 1].length()) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (string& i : arr) cout << i << endl;
}