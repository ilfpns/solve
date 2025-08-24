#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

bool len(int l, int r) {
	return l == r;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string l, r; cin >> l >> r;
	int cnt = 0;

	if (!len(l.length(), r.length())) {
		cout << 0 << endl; 
		return 0;
	}
	else if (len(l.length(), r.length())) {
		for (int i = 0; i < l.length(); i++) {
			if (l[i] == r[i]) {
				if (l[i] == '8') {
					cnt++;
				}
			}
			else {
				break;
			}
		}
	}
	
	cout << cnt << endl;
	return 0;
}
