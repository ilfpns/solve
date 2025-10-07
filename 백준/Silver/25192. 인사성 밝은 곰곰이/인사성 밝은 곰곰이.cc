#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_set>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a; cin >> a;
	int sum = 0;
	unordered_set<string> arr;

	for (int i = 0; i < a; i++) {
		string tmp;
		cin >> tmp;
		
		if (tmp == "ENTER") {
			arr.clear();
		}
		else {
			if (!arr.count(tmp)) {
				arr.insert(tmp);
				sum++;
			}
		}
	}

	cout << sum;
	return 0;
}