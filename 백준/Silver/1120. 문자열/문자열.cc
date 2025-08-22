#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int min_diff = a.length(); // 최대 차이는 A의 길이만큼

    for (int i = 0; i <= b.length() - a.length(); ++i) {
        int diff = 0;
        for (int j = 0; j < a.length(); ++j) {
            if (a[j] != b[i + j]) {
                ++diff;
            }
        }
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << '\n';
    return 0;
}