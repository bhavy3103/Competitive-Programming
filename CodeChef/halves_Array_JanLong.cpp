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
        int n;
        cin >> n;
        ll a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        vector<ll> v1, v2;
        for (int i = 0; i < 2 * n; i++)
        {
            if (a[i] > n && i < n)
                v1.push_back(i + 1);
            else if (a[i] <= n && i >= n)
                v2.push_back(i + 1);
        }
        asc_vs(v1);
        asc_vs(v2);
        ll p = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            p += abs(v1[i] - v2[i]);
        }
        cout << p << endl;
    }

    return 0;
}