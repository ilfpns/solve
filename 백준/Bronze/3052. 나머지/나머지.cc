#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {   
    vector<int> arr;
    
    for (int i = 0; i < 10; i++) {
        int tmp = 0;
        cin >> tmp;

        arr.push_back(tmp % 42);
    }

    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    cout << arr.size() << endl;

    return 0;
}