#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b; cin >> a >> b;

    char atmp = a[0];
    char btmp = b[0];

    a[0] = a[2];
    b[0] = b[2];
    a[2] = atmp;
    b[2] = btmp;

    if (a[0] > b[0]) cout << a;
    else if (a[0] < b[0]) cout << b;
    else if (a[1] > b[1] && a[0] == b[0]) cout << a;
    else if (a[1] < b[1] && a[0] == b[0]) cout << b;
    else if (a[2] > b[2] && a[0] == b[0] && a[1] == b[1]) cout << a;
    else cout << b;

    return 0;
}