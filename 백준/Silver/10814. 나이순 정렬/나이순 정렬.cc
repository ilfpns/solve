#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
bool compare(pair<int, string> a, pair<int, string> b);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	pair<int, string> tmp;
	vector<pair<int, string>> arr;

	int repeat = 0; cin >> repeat;
	for (int i = 0; i < repeat; i++) {
		cin >> tmp.first >> tmp.second;
		arr.push_back(tmp);
	}

	stable_sort(arr.begin(), arr.end(), compare);
	

	for (int i = 0; i < repeat; i++) {
		cout << arr[i].first << " " << arr[i].second << endl;
	}
}

bool compare(pair<int,string> a, pair<int,string> b)
{
    return a.first < b.first;
}