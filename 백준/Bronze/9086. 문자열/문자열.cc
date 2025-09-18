#include <iostream>
#include <string>

using namespace std;

int main() {
	int r; cin >> r;

	for (int i = 0; i < r; i++) {
		string arr; cin >> arr;

		cout << arr[0] << arr[arr.size() - 1] << endl;
	}

	return 0;
}