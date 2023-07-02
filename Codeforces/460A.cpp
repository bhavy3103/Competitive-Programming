#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ct = n;
    if (n < m)
    {
        cout << ct << endl;
    }
    else if (n == m)
    {
        cout << ct + 1 << endl;
    }
    else
    {
        int p = n;
        for (int i = 1; i <= n; i++)
        {
            ct++;
            if (i % m == 0)
            {
                n++;
            }
        }
        cout << ct - p << endl;

        // int k = n + m;
        // for (int i = n; i <= k; i++)
        // {
        //     ct++;
        // }
        // cout << ct << endl;
    }
    return 0;
}