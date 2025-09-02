#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m; cin >> m;
    vector<int> arr(m);
    unordered_map<int, int> freq;

    for (int& i : arr) {
        cin >> i;
        freq[i]++;
    }

    int n; cin >> n;
    vector<int> com(n);

    for (int& i : com) cin >> i;

    for (int i = 0; i < n; i++) {
        cout << freq[com[i]] << " ";
    }

    return 0;
}