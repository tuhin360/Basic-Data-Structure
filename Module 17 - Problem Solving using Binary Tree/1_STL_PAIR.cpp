#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<string, int> p;
    // p = {"Hello", 3};
    // cout << p.first << endl;
    // cout << p.second << endl; 


    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl; 
    }
    
    return 0;
}

// input:
// 5
// 2 4
// 5 4
// 5 7
// 9 2
// 6 9

// output:
// 2 4
// 5 4
// 5 7
// 9 2
// 6 9