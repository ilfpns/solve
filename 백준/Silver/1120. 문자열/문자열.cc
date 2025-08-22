#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int sum = 0;
        
    int dif = a.length();

    for (int i = 0; i <= b.length() - a.length(); i++) {
        int temp = 0;
        for (int j = 0; j < a.length(); j++) {
            if (a[j] != b[i + j])
                temp++;
        }
        dif = min(dif, temp);
    }
    cout << dif;
    return 0;
}
