#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, ct = 0, m = 0;
    // cin >> n;
    // long long int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     if (a[i] >= a[i - 1])
    //     {
    //         ct++;
    //         if (ct >= m)
    //         {
    //             m = ct;
    //         }
    //     }
    //     else
    //     {
    //         ct = 1;
    //     }
    // }
    // cout << m << endl;
    int n, l(1), ml(1);
    cin >> n;
    int profits[n];

    for (int i = 0; i < n; i++)
    {
        cin >> profits[i];
        if (i > 0)
            if (profits[i] >= profits[i - 1])
            {
                l++;
                ml = max(ml, l);
            }
            else
                l = 1;
    }

    cout << ml << endl;

    return 0;
}