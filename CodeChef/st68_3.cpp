#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c;
        cin >> n >> x >> c;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s = accumulate(a, a + n, 0);
        int s1 = s;
        int th;
        sort(a, a + n);
        int d2 = s;
        for (int i = 0; i < n; i++)
        {
            s1 = s1 + x - a[i] - c;
            if (s1 <= d2)
            {
                break;
            }
            d2 = s1;
        }
        if (s1 < d2)
        {
            th = d2;
            cout << th << endl;
        }
        else
        {

            cout << s1 << endl;
        }
    }

    // cout <<  <<endl;
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n, x, c, ct = 0;
    //     cin >> n >> x >> c;
    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> a[i];
    //     }
    //     sort(a, a + n);
    //     int s1 = accumulate(a, a + n, 0);
    //     int s2;
    //     // for (int i = 0; i < n; i++)
    //     int i = 0;
    //     int z = s1;
    //     int s = s1;
    //     do
    //     {
    //         if (z + x - a[i] - c > s)
    //         {
    //             a[i] = x;
    //             s2 = accumulate(a, a + n, 0);
    //             s2 = s2 - c;

    //             if (s2 > s1)
    //                 s = s2;
    //         }
    //         else
    //         {
    //             s = s1;
    //             ct = 0;
    //             break;
    //         }
    //         i++;
    //     } while (s2 > s1);

    //     if (ct == 0)
    //     {
    //         s = s1;
    //     }
    //     cout << s << endl;
    // }
    return 0;
}