#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string arr[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

int main() {
	int sum = 0;
	string sen; cin >> sen;

	for (int i = 0; i < 8; i++) {
		while (sen.find(arr[i]) != string::npos) {
			sen.replace(sen.find(arr[i]), arr[i].length(), "#");
		}
	}
	
	//cout << sen;
	cout << sen.length();
	return 0;
}