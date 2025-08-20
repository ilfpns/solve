#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;
using vs = vector<string>;

void change(vs& v, int x, int y) {
    for (int i = y; i < y + 3; i++) {
        for (int j = x; j < x + 3; j++) {
            v[i][j] = v[i][j] == '1' ? '0' : '1';
        }
    }
}

bool same(const vs& input, const vs& target, int x, int y) {
    for (int i = 0; i < y; i++) {
        if (input[i] != target[i]) return false;
    }
    return true;
}

int main() {
    // fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y; 
    int cnt = 0; 
    string temp;  
    vs input, target;

    cin >> y >> x;

    input.resize(y); target.resize(y); 

    for (auto& v : input) cin >> v;
    for (auto& v : target) cin >> v;

    for (int i = 0; i < y - 2; i++) {
        for (int j = 0; j < x - 2; j++) {
            if (input[i][j] != target[i][j]) {
                cnt++;
                change(input, j, i);
            }
        }
    }
    cout << (same(input, target, x, y) ? cnt : -1);
}