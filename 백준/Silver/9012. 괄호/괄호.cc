#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_set>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
 
	int a; cin >> a;

	for (int i = 0; i < a; i++) {
		string tmp;
		cin >> tmp;

		stack<char> st;
		string answer = "YES";
		for (int j = 0; j < tmp.length(); j++) {
			if (tmp[j] == '(') {
				st.push(tmp[j]);
			}
			else if (!st.empty() && tmp[j] == ')' && st.top() == '(') {
				st.pop();
			}
			else {
				answer = "NO";
				break;
			}
		}
	
		if (!st.empty()) answer = "NO";
		cout << answer << endl;
	}

	return 0;
}