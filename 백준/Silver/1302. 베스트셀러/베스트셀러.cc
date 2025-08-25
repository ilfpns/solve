#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int a; cin >> a;
	vector<string> arr(a);
	vector<string> Arr;

	string name;
	int max = 0, idx= 0;

	if (a == 1) {
		cin >> arr[0];
		cout << arr[0] << endl;
		return 0;
	}

	for (string& i : arr) cin >> i;
	sort(arr.begin(), arr.end());

	for (int i = 0; i < a-1; i++) {
		if (arr[i] == arr[i+1]) {
			Arr.push_back(arr[i]);
		}
	}
	sort(Arr.begin(), Arr.end());
	Arr.erase(unique(Arr.begin(), Arr.end()), Arr.end());

	vector<int> p(Arr.size(), 0);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < Arr.size(); j++) {
			if (arr[i] == Arr[j]) {
				p[j] += 1;
			}
		}
	}

	for (int i = 0; i < Arr.size(); i++) {
		if (p[i] > max) {
			max = p[i];
			idx = i;
		}
	}

	if (Arr.empty()) {
		cout << arr[0] << endl;
		return 0;
	}

	cout << Arr[idx] << endl;

	return 0;
}