#include <iostream>
#include <vector>

using namespace std;

int main() {
	int byte = 0; 
	cin >> byte;

	for (int i = 0; i < byte; i += 4) {
		cout << "long" << " ";
	}

	cout << "int";

	return 0;
}