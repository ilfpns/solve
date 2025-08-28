#include <iostream>
#include <algorithm>
using namespace std;

int d[5001];

void ott(int num) {
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    for (int i = 4; i <= num; i++) {
        d[i] = d[i - 1] + d[i - 2] + d[i - 3];
    }
    cout << d[num] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r = 0; cin >> r;

    for (int i = 0; i < r; i++) {
        int tmp = 0;
        cin >> tmp;
        ott(tmp);
    }

    return 0;
}

