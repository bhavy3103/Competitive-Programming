#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cto = 0, cte = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 != a[i] % 2)
            {
                if (a[i] % 2 == 1)
                    cto++;
                else
                    cte++;
            }
        }
        if (cto != cte)
            cout << -1 << endl;
        else
            cout << cto << endl;
    }
    return 0;
}