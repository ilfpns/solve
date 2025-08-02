#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
	int len, sum = 0, max = -1, input = 0;
	vector<int> A, B, b;

	cin >> len;
	
	for (int i = 0; i < len; i++) {
		cin >> input;
		A.push_back(input);
	}
	for (int i = 0; i < len; i++) {
		cin >> input;
		B.push_back(input);
	}

	b = B;

	sort(A.begin(), A.end());
	sort(b.begin(), b.end(), greater<int>());

	for (int i = 0; i < len; i++) {
		sum += A[i] * b[i];
	}
	cout << sum << endl;
}