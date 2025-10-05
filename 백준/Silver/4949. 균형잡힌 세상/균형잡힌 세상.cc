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
	
	string sentence;
	
	while (1) {
		getline(cin, sentence);
		if (sentence == ".") break;

		stack<char> st;
		string answer = "yes";

		for (char ch : sentence) {
			if (ch == '(' || ch == '[') {
				st.push(ch);
			}
			else if (ch == ')') {
				if (st.empty() || st.top() != '(') {
					answer = "no";
					break;
				}
				st.pop();
			}

			else if (ch == ']') {
				if (st.empty() || st.top() != '[') {
					answer = "no";
					break;
				}
				st.pop();
			}
		}

		if (!st.empty()) answer = "no";
		cout << answer << endl;
	}
	return 0;
}