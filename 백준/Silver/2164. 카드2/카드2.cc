#include <iostream>
#include <deque>

using namespace std;

int main(void) {
	int m = 0; 
	cin >> m;

	deque<int> arr;

	for (int i = 1; i <= m; i++) {
		arr.push_back(i);
	}
	
	while (arr.size() > 1) {

		arr.pop_front();
		arr.push_back(arr.front());
		arr.pop_front();
	}

	cout << arr.front();
	//cout << endl << arr.back();
	return 0;
}