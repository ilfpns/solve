#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<bool> arrcom(31, true); // Index 1 to 30

    for (int i = 0; i < 28; i++) {
        int tmp;
        cin >> tmp;
        arrcom[tmp] = false;
    }

    for (int i = 1; i <= 30; i++) {
        if (arrcom[i]) {
            cout << i << endl;
        }
    }

    return 0;
}