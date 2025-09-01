#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>

using namespace std;

int main(void) {
	int k;
	cin >> k;

	stack<int> s;
	while (k--) {
		int num;
		cin >> num;

		if (num == 0 && !s.empty()) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}

	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;

	return 0;
}