#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    int sum = 0;

    string word = "";

    for (int i = 0; i <= input.length(); i++) { // Hi Im YSH 0 ~ 9
        if (i == input.length() || input[i] == ' ') {
            if (!word.empty()) {
                sum++;
                word = "";
            }
        }
        else {
            word += input[i];
        }
    }

    cout << sum;
    return 0;
}