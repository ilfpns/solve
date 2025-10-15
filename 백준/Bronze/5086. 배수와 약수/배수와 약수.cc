#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a = 0, b = 0;
	while (1) {
		cin >> a >> b;
		if (a == b && a == 0) {
			break;
		}

		if (b % a == 0) cout << "factor" << endl;
		else if (a % b == 0) cout << "multiple" << endl;
		else cout << "neither" << endl;
	}
	return 0;
}
 