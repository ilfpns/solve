#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <string>
using namespace std;

string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

int cntWB(int x, int y);
int cntBW(int x, int y);

string map[50];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	int cnt = 0, max = 64;
	int letter = 0;
	cin >> n >> m;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, map[i]);
	}

	for (int i = 0; i + 8 <= n; i++) {
		for (int j = 0; j + 8 <= m; j++) {
			int tmp = min(cntWB(i, j), cntBW(i, j));
			if (tmp < max) max = tmp;
		}
	}

	cout << max << endl;
}

int cntWB(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (map[x + i][y + j] != WB[i][j]) cnt++;
		}
	}
	return cnt;
}

int cntBW(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (map[x + i][y + j] != BW[i][j]) cnt++;
		}
	}
	return cnt;
}

