#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i, v, b) for (ll i = v; i < b; i++)
#define fb(i, v, b) for (ll i = v; i >= b; i--)
#define min3(v, b, c) min(v, min(b, c))
#define min4(v, b, c, d) min(v, min(b, min(c, d)))
#define max3(v, b, c) max(v, max(b, c))
#define max4(v, b, c, d) max(v, max(b, max(c, d)))
#define asc_vs(v) sort(v.begin(), v.end())
#define dsc_vs(v) sort(v.begin(), v.end(), greater<int>())
#define asc_arr(v, n) sort(v, v + n)
#define dsc_arr(v, n) sort(v, v + n, greater<int>())
#define rev_vs(v) reverse(v.begin(), v.end())
#define rev_arr(v) reverse(v, v + n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll n;
    // cin >> n;
    // vector<ll> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int ct = 0;
    //     ll m;
    //     cin >> m;
    //     v.push_back(m);
    //     asc_vs(v);
    //     int low = 0, high = n - 1;
    //     while (high - low > 1)
    //     {
    //         int mid = (high + low) / 2;
    //         if (v[mid] < m)
    //             low = mid + 1;
    //         else
    //             high = mid;
    //     }
    //     v.erase(m);
    ll m;
    int n, i, j, k, ans;
    cin >> n;
    int a[n], p;
    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    sort(a, a + n);
    while (m--)
    {
        cin >> k;
        ans = upper_bound(a, a + n, k) - a;
        cout << ans << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (m >= v[i])
    //         ct++;
    // }
    // cout << ct << endl;

    return 0;
}