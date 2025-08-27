#include <iostream>
#include <algorithm>
using namespace std;

int d[5001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    const int INF = 1e9;
    fill(d, d + 5001, INF);   
    d[0] = 0; 

    for (int i = 1; i <= x; ++i) {
        if (i >= 3 && d[i - 3] != INF)
            d[i] = min(d[i], d[i - 3] + 1);
        if (i >= 5 && d[i - 5] != INF)
            d[i] = min(d[i], d[i - 5] + 1);
    }

    if (d[x] == INF)
        cout << -1 << "\n";
    else
        cout << d[x] << "\n";

    return 0;
}

