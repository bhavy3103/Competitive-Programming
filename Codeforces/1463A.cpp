#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i >= b; i--)
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define asc_vs(v) sort(v;.begin(), v.end())
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
        ll a, b, c;
        cin >> a >> b >> c;
        // if (a > 7 && b > 7 && c > 7)
        //     cout << "YES" << endl;
        // else
        {
            ll d = 0;
            ll p = max3(a, b, c);
            ll q = min3(a, b, c);
            ll s = a + b + c - p - q;
            d = (a + b + c) / 9;
            //     // if (p - q < 7 && s - q < 7 && p - s < 7 && a + b + c > 7)
            //     //     cout << "YES" << endl;
            //     // else if (a + b + c < 7)
            //     //     cout << "NO" << endl;
            //     // else
            //     //     cout << "NO" << endl;
            if ((a + b + c) % 9 > 0)
            {
                cout << "NO" << endl;
                continue;
            }
            if (a < d || b < d || c < d)
            {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            //     else
            //         cout << "YES" << endl;
            // }
        }
    }
    return 0;
}