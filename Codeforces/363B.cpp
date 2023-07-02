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
    // int n, k;
    // cin >> n >> k;
    // vector<pair<int, int>> v;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // if (n - k == 0)
    // {
    //     cout << 1 << endl;
    // }
    // else
    // {
    //     for (int i = 0; i < n - k + 1; i++)
    //     {
    //         int t = k;
    //         ll p = 0;
    //         int s = i;
    // p = accumulate(a + i, a + i + k, 0);
    //         for (int j = 0; j < k; j++)
    //         {
    //             p += a[s];
    //             s++;
    //         }
    //         v.push_back({p, i + 1});
    //     }
    //     sort(v.begin(), v.end());
    //     cout << v[0].second << endl;
    // }
    long long n, k, x, ans = 0;
    cin >> n >> k;
    long long ara[n], sum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
        if (i == 0)
            sum[0] = ara[0];
        else
            sum[i] = sum[i - 1] + ara[i];
    }

    long long mn = (long long)1e16;
    for (int i = 0; i < n - k + 1; i++)
    {
        if (i == 0)
            x = sum[i + k - 1];
        else
            x = sum[i + k - 1] - sum[i - 1];
        if (x < 0)
            x *= -1;
        if (x < mn)
        {
            mn = x;
            ans = (long long)i;
        }
    }
    cout << ans + 1 << endl;

    return 0;
}