#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long S;
    cin >> S;

    long long sum = 0;
    int count = 0;

    for (int i = 1; ; i++) {
        if (sum + i > S) break;
        sum += i;
        count++;
    }

    cout << count << '\n';
    return 0;
}