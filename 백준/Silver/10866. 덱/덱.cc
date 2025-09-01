#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> arr;

void push_front() {
	int tmp; cin >> tmp;
	arr.insert(arr.begin(), tmp);
}

void push_back() {
	int tmp; cin >> tmp;
	arr.push_back(tmp);
}

void pop_front() {
	int tmp = arr.size();

	if (tmp == 0) {
		cout << -1 << endl;
		return;
	}
	else {
		cout << arr[0] << endl;
		arr.erase(arr.begin());
	}
}

void pop_back() {
	int tmp = arr.size();

	if (tmp == 0) {
		cout << -1 << endl;
		return;
	}
	else {
		cout << arr.back() << endl;
		arr.pop_back();
	}
}

void size() {
	cout << arr.size() << endl;
}

void empty() {
	if (arr.empty())
		cout << 1 << endl;
	else
		cout << 0 << endl;
}

void back() {
	if (arr.empty())
		cout << -1 << endl;
	else
		cout << arr.back() << endl;
}

void front() {
	if (arr.empty())
		cout << -1 << endl;
	else
		cout << arr[0] << endl;
}

int main(void) {
	int k = 0;
	string request;

	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> request;

		if (request == "push_front") push_front();
		else if (request == "push_back") push_back();
		else if (request == "pop_front") pop_front();
		else if (request == "pop_back") pop_back();
		else if (request == "size") size();
		else if (request == "empty") empty();
		else if (request == "back") back();
		else if (request == "front") front();
	}

	return 0;
}