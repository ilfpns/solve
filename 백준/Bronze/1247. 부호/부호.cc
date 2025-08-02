#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int tc = 0; tc < 3; ++tc){
        int repeat;
        cin >> repeat;

        __int128 s = 0;
        long long a;
        for(int i = 0; i < repeat; ++i){
            cin >> a;
            s += a;
        }

        if     (s > 0) cout << "+\n";
        else if(s < 0) cout << "-\n";
        else           cout << "0\n";
    }
}
