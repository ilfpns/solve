#include <iostream>
using namespace std;
    
int main() {
    int standard[6] = { 1, 1, 2, 2, 2, 8 };
    int input[6];

    for (int i = 0; i < 6; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << standard[i] - input[i] << " ";
    }

    return 0;
}