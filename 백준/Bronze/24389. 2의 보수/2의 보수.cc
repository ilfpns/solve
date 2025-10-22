#include <iostream>
#include <bitset>

using namespace std;

int main() {
	int a;
	int sum = 0;
	cin >> a;

	bitset<32> diff_bits(a ^ (~a + 1));
	cout << diff_bits.count();
	

	return 0;
}