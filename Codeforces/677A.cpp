#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ct = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= m)
        {
            ct++;
        }
        else if (a[i] > m)
        {
            ct += 2;
        }
    }
    cout << ct;

    return 0;
}