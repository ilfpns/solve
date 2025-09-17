#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using namespace std;

int main() {
    int m, n; cin >> m >> n;
    vector<int> arr;

    for (int i = 1; i <= m; i++) {
        arr.push_back(i);
    }
    
    
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        swap(arr[x-1], arr[y-1]);
    }
    for (int& i : arr)cout << i << " ";
    return 0;
}