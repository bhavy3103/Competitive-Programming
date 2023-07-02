#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, ct = 0;
    cin >> t >> n;
    int a[t];
    for (i = 1; i <= t; i++)
    {
        cin >> a[i];
    }
    for (j = 1; j <= t; j++)
    {
        if (a[j] >= a[n] && a[j] > 0)
        {
            ct++;
        }
        else
        {
            continue;
        }
    }

    cout << ct << endl;

    return 0;
}