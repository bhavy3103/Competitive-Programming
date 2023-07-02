#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i >= b; i--)
#define asc_vs(v) sort(v.begin(), v.end())
#define dsc_vs(v) sort(v.begin(), v.end(), greater<int>())
#define asc_arr(a, n) sort(a, a + n)
#define dsc_arr(a, n) sort(a, a + n, greater<int>())
#define rev_vs(v) reverse(v.begin(), v.end())
#define rev_arr(a) reverse(a, a + n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, y, n, i, t;
    while (cin >> n >> t)
    {
        if (n == 1 && t == 10)
            cout << "-1\n";
        else if (n >= 2 && t == 10)
        {
            for (i = 1; i < n; i++)
            {
                cout << "1";
            }
            cout << "0\n";
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                cout << t;
            }
            cout << endl;
        }
    }
    // int n, t;
    // cin >> n >> t;
    // ll a, b;
    // a = pow(10, n - 1);
    // if (a % t == 0 && n > 1)
    //     cout << a << endl;
    // else if (n == 1 && t == 10)
    //     cout << -1 << endl;
    // else
    //     cout << a + (t - a % t) << endl;
    // b = pow(10, n);
    // int ct = 0;
    // ff(i, a, b)
    // {
    //     // cout << a << endl;
    //     if (i % t == 0)
    //     {
    //         cout << i << endl;
    //         ct++;
    //         break;
    //     }
    // }
    // if (ct == 0)
    //     cout << -1 << endl;
    return 0;
}