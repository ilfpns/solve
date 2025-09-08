#include <iostream>
#include <vector>

using namespace std;

vector<int> divide;

void acsoo(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            divide.push_back(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int bulb = 0; cin >> bulb;
    int current = 0; cin >> current;
    vector<int> arr;

    acsoo(current);

    for (int i = 0; i < bulb; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    int total = 0;
    for (int i = 0; i < bulb; i++) { // 1 2 7 14 , 4 1 13
        int move = 1e9; 
        for (int& j : divide) {
            move = min(move, abs(arr[i] - j));
        }
        total += move;
    }
    cout << total;

    return 0;
}
