#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string a; cin >> a;

	string al = "abcdefghijklmnopqrstuvwxyz";
	vector<int> b(26, -1);

	for (int i = 0; i < 26; i++) {
		if (b[i] == -1) {
			b[i] = a.find(al[i]);
		}

		cout << b[i] << " ";
 	}

	return 0;
}