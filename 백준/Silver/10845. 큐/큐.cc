#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
vector<int> arr;

void empty() {
	if (arr.size() == 0) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
}

void push() {
	int tmp;
	cin >> tmp;

	arr.push_back(tmp);
}

void pop() {
	if (arr.size() == 0) {
		cout << -1 << endl;
	}

	else if(arr.size() >= 1) {
		cout << arr[0] << endl;
		arr.erase(arr.begin());
	}
}

void front() {
	if (arr.size() == 0) {
		cout << -1 << endl;
	}

	else if (arr.size() >= 1) {
		cout << arr[0] << endl;
	}
}

void back() {
	if (arr.size() == 0) {
		cout << -1 << endl;
	}
	
	else if (arr.size() >= 1) {
		int len = arr.size();
		cout << arr[len - 1] << endl;
	}
}

void size() {
	cout << arr.size() << endl;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int r = 0; 
	cin >> r;
	string act;

	for (int i = 0; i < r; i++) {
		cin >> act;

		if (act == "push") {
			push();

		}
		else if (act == "pop") {
			pop();
		}
		else if (act == "size") {
			size();
		}
		else if (act == "empty") {
			empty();
		}
		else if (act == "front") {
			front();
		}
		else {
			back();
		}
		
	}

	return 0;
}