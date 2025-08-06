#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N; cin >> N;
	int K, I; cin >> K >> I;
	int cnt = 0;

	while (K != I) {
		K = (K + 1) / 2;
		I = (I + 1) / 2;
		cnt++;
	}
	cout << cnt << endl;


	return 0;
}
