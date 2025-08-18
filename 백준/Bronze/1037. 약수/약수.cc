#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int r = 0;
	cin >> r;

	vector<int> num(r);

	for (int& i : num) cin >> i;
	//for (int& i : num) cout << i << " ";

	int maxNum = *max_element(num.begin(), num.end());
	int minNum = *min_element(num.begin(), num.end());
	cout << maxNum * minNum << endl;
}