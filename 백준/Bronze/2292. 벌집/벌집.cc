#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0;
    cin >> a;

    int max = 1;
    int add = 6;
    int ret = 1;

    while (1) {
        if (a <= max) break; // 7 13

        max += add;
        add += 6;
        ++ret;
    }

    cout << ret;

    return 0;
}

/*
* 1 -> 1
* 2 ~ 7 -> 2 (+5) (6)
* 8 ~ 19 -> 3 (+9) (12)
* 20 ~37 -> 4 (+17) (18)
* 38 ~ 61 -> 5 (+23) (24)
*/