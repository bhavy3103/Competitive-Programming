#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i >= b; i--)
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0 || b == 0)
            cout << 0 << endl;
        else
        {
            ll ct = 0;
            if (b >= a / 2)
            {
                ct = a / 2;
            }
            cout << min3(a, b, (a + b) / 3) << endl;
            // while (a > 1 && b > 1)
            // {
            //     if (a >= 2 && b >= 1)
            //     {
            //         a -= 2;
            //         b -= 1;
            //         ct++;
            //     }
            //     if (a >= 1 && b >= 2)
            //     {
            //         a -= 1;
            //         b -= 2;
            //         ct++;
            //     }
            //     if (a < 1 || b < 1)
            //         break;
            // }
            // cout << ct << endl;
        }
    }

    return 0;
}