#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    int cost = 1e9;
   
    vector<pair<int, int>> arr;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            int pack = arr[i].first;
            int single = arr[j].second;

            int total = 0;
            int packs = n / 6;
            int singlese = n % 6;

            total = pack * packs + single * singlese;
            total = min(total, n * single);
            total = min(total, ((n + 5) / 6) * pack);

            cost = min(cost, total);
        }
    }

    cout << cost << endl;
    return 0;
}