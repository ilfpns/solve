#include <iostream>
#include <algorithm>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string arr; cin >> arr;

    string re = arr;
    reverse(re.begin(), re.end());

    if (re == arr) cout << 1;
    else cout << 0;

    return 0;
}