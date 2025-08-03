#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, cnt = 0;

	cin >> n >> m;
	//int a = n > m ? n : m;
	vector<string> dd(n);
	unordered_set<string> bo;
	vector<string> result;

	for (string& i : dd) cin >> i;

	for (int i = 0; i < m; i++) {
		string temp;
		cin >> temp;
		bo.insert(temp);
	}

	for (const string& s : dd) {
		if (bo.count(s)) {
			result.push_back(s);
			cnt++;
		}
	}

	sort(result.begin(), result.end());
	cout << cnt << endl;
	for (const string& s : result) cout << s << endl;
}