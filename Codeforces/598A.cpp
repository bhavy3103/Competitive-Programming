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
        ll n, sum = 0;
        cin >> n;
        sum = (n * (n + 1)) / 2;
        ll x = 1;
        while (x <= n)
        {
            sum -= 2 * x;
            x *= 2;
        }
        // for (ll i = 1; i <= n; i++)
        // {
        //     int p = __builtin_popcount(n);
        //     if (p == 0 || p == 1)
        //         sum -= i;
        //     else
        //         sum += i;
        // }
        cout << sum << endl;
    }

    return 0;
}