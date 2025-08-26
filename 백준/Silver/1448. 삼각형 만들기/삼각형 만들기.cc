#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> num(n);
    for (int& i : num) cin >> i;
    sort(num.begin(), num.end(), greater<>());
    int cnt = -1;
    for (int i = 0; i < n - 2; i++) {
        int x = num[i], y = num[i + 1], z = num[i + 2];
        if (x < y + z) {
            cnt = x + y + z;
            break;
        }
    }
    cout << cnt << '\n';
    return 0;
}
