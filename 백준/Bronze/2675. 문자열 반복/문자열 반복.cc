#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int r; cin >> r;

	for (int i = 0; i < r; i++) {
		int a; cin >> a;
		string b; cin >> b;
		
		for (int k = 0; k < b.length(); k++) {
			for (int n = 0; n < a; n++) {
				cout << b[k];
			}
		}

		cout << endl;
	}
	return 0;
}