#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long X, Y, Z; cin >> X >> Y;

	Z = (100 * Y) / X;

	if (Z >= 99) {
		cout << "-1" << endl;
		return 0;
	}

    long long left = 0, right = 1e9;

	while (left <= right) {
		long long mid = (left + right);
		mid = mid / 2;
		int temp = (100 * (Y + mid)) / (X + mid);

		if (temp > Z) {
			right = mid - 1;
		}
		else if (temp <= Z){
			left = mid + 1;
		}
	}

	cout << left << endl;
	return 0;
}
