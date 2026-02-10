#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n), prefix(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    prefix[0] = a[0];

    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + a[i];
    }

    for(int i = n-1; i >= 0; i--)
    {
        cout << prefix[i] << " ";
    }
}
