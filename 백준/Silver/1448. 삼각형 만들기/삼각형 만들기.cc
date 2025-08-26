
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n; // 빨대 개수 변수 생성
    vector<int> v; 

    cin >> n; 

    // 빨대 길이를 입력받고 벡터에 저장
    for (int i = 0; i < n; i++) 
    {
        int a; 
        cin >> a; 
        v.push_back(a);
    }

    // 벡터 내림차순 정렬
    sort(v.begin(), v.end(), greater<>());


    for (int i = 0; i < n; i++)
    {
        if (v[i] < v[i + 1] + v[i + 2])
        {
            cout << v[i] + v[i + 1] + v[i + 2] << '\n'; 
            break;
        }
        else if (i == n - 1)
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}