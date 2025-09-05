#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	vector<bool> arr(10000, true);

	for (int i = 0; i < 10000; i++) {
		int sum = 0;
		int chun = 0;
		int baek = 0;
		int ill = 0;
		int sib = 0;

		if (i < 10000 && i > 999) { // 1000, 1001, 1002 ...
			ill = i % 10;
			sib = ((i % 100) / 10);
			baek = (i / 100) % 10;
			chun = (i / 1000);
			sum = ill + sib + baek + chun + i;
			if (sum < 10000) arr[sum] = false;
		}
		else if (i < 10) { // 1, 2, 3, 4 ...
			sum = i + i;
			if (sum < 10000) arr[sum] = false;
		}
		else if (i < 100) { // 10, 11, 12, 13 ...
			ill = i % 10;
			sib = (i / 10);
			sum = ill + sib + i;
			if (sum < 10000) arr[sum] = false;
		}
		else if (i > 99 && i < 1000) { // 100, 101, 102, 103 ...
			ill = (i % 10);
			sib = (i / 10) % 10;
			baek = (i / 100);
			sum = i + ill + sib + baek;
			if (sum < 10000) arr[sum] = false;
		}
	}

	for (int i = 0; i < 10000; i++) {
		if (arr[i]) cout << i << endl;
	}
	return 0;
}

//sib = (i % 100) * 10;