#include <iostream>
#include <algorithm>
using namespace std;

int dp[15][15];

void ott() {
    int k, n;
    int total = 0;
    cin >> k >> n;

    for (int i = 1; i <= 14; ++i) {
        dp[0][i] = i;
        dp[i][1] = 1;
    }

    // 점화식 적용
    for (int k = 1; k <= 14; ++k) {
        for (int i = 2; i <= 14; ++i) {
            dp[k][i] = dp[k][i - 1] + dp[k - 1][i];
        }
    }


    cout << dp[k][n] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r = 0; cin >> r;
        
    for (int i = 0; i < r; i++) {
        ott();
    }
    return 0;
}

