#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int x, n, m, N, M;
    long long int ans, ans1;
    cin >> t;
    while (t--)
    {
        ans = ans1 = 0;
        int tag = 0;
        cin >> x >> n >> m;

        N = n;
        M = m;
        ans = ans1 = x;
        while (n-- && ans > 0)
        {
            ans = (ans / 2) + 10;
            if (ans <= 0)
            {
                tag = 1;
                break;
            }
        }

        while (m-- && ans > 0)
        {
            ans = ans - 10;
            if (ans <= 0)
            {
                tag = 1;
                break;
            }
        }
        while (M-- && ans1 > 0)
        {
            ans1 = ans1 - 10;
            if (ans1 <= 0)
            {
                tag = 1;
                break;
            }
        }
        while (N-- && ans1 > 0)
        {
            ans1 = (ans1 / 2) + 10;
            if (ans1 <= 0)
            {
                tag = 1;
                break;
            }
        }
        if (tag == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int a, b, c, ct = 0;
    //     cin >> a >> b >> c;
    //     while (a > 0)
    //     {
    //         while (b > 0 && a > 0)
    //         {
    //             a = (a / 2) + 10;
    //             b--;
    //             if (a <= 0)
    //             {
    //                 ct = 1;
    //                 break;
    //             }
    //         }
    //         while (c > 0 && a > 0)
    //         {
    //             a = a - 10;
    //             c--;
    //             if (a <= 0)
    //             {
    //                 ct = 1;
    //                 break;
    //             }
    //         }
    //     }
    //     if (ct > 0)
    //     {
    //         cout << "YES" << endl;
    //     }
    //     if (ct == 0)
    //     {
    //         cout << "NO" << endl;
    //     }
    // }
    return 0;
}