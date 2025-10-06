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
	int arr[51] = { 0 };

	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		arr[b]++;
	}

	for (int i = 50; i >= 0; i--) {
		if (arr[i] == i) {
			cout << i;
			return 0;
		}
	}
	
	cout << -1;
	return 0;
}