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
 
	int a, answer = 0;
	cin >> a;

	for (int i = 1; i < a; i++) {
		int sum = i, tmp = i;

		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}

		if (sum == a) {
			answer = i;
			break;
		}
	}
	cout << answer;
	return 0;
}
 