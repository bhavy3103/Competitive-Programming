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

ll getR(ll a)
{
    while (a % 2 == 0)
        a /= 2;
    return a;
}

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
        // if (a == b)
        //     cout << 0 << endl;
        // ll ct = 0;
        // else
        // {
        //     ll p = abs(a - b);
        //     cout << ceil(abs(a - b) / 3) << endl;
        // }
        if (a > b)
            swap(a, b);

        ll r = getR(a);
        if (getR(b) != r)
        {
            cout << -1 << endl;

            // continue;
            // break;
        }
        else

        {
            ll ans = 0;
            b /= a;

            while (b >= 8)
                b /= 8, ++ans;
            if (b > 1)
                ++ans;

            cout << ans << endl;
        }
    }

    return 0;
}