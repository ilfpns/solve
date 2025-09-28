#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;

    int repeat = 0;
    int q = a;
    int com = -1;

    do {
        int ap = q / 10;
        int de = q % 10;
        int tmp = ap + de;
        tmp = tmp % 10;
        com = de * 10 + tmp;
        q = com;
        repeat++;
    } while (com != a);

    cout << repeat << endl;

	return 0;
}