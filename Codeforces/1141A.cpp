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
    ll n, m;
    cin >> n >> m;
    if (m < n || (m % n != 0))
        cout << -1 << endl;
    else if (m == n)
        cout << 0 << endl;
    else
    {
        int ct = 0, p = 0;
        while (1)
        {
            if (m % (3 * n) == 0)
            {
                n = 3 * n;
                ct++;
            }
            if (m % (2 * n) == 0)
            {
                n = 2 * n;
                ct++;
            }
            if (n == m)
            {
                cout << ct << endl;
                p++;
                break;
            }
            if (m % (3 * n) != 0 && m % (2 * n) != 0)
            {
                cout << -1 << endl;
                p++;
                break;
            }
        }
        if (p == 0)
            cout << -1 << endl;
    }

    return 0;
}