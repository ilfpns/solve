#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long X, Y;
    cin >> X >> Y;

    long long originZ = (Y * 100) / X;

    if (originZ >= 99) {
        cout << -1 << endl;
        return 0;
    }

    long long left = 1, right = 1e9;
    long long result = -1;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long temp = ((Y + mid) * 100) / (X + mid);

        if (temp > originZ) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result << endl;
    return 0;
}
