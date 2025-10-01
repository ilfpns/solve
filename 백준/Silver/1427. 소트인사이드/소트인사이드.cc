#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main() {
	string arr;
	cin >> arr;

	sort(arr.begin(), arr.end(), greater<char>());
	cout << arr;
	return 0;
}