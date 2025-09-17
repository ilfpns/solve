#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> basket(N);
    for (int i = 0; i < N; i++) {
        basket[i] = i + 1;
    }

    for (int k = 0; k < M; k++) {
        int i, j;
        cin >> i >> j;
        reverse(basket.begin() + i - 1, basket.begin() + j);
    }

    for (int num : basket) {
        cout << num << " ";
    }

    return 0;
}