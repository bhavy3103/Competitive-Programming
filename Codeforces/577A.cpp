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

ll N = 1e10 + 5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ct = 0;
    ll x;
    cin >> n >> x;
    // ll a[N];
    // int j = 1;
    // ll k = 0;
    // while (n--)
    // {
    //     for (int i = 1; i < n; i++)
    //     {
    //         a[k] = j * i;
    //         j++;
    //         k++;
    //     }
    //     j = 1;
    // }
    // for (int i = 0; i < k; i++)
    // {
    //     if (a[i] % x == 0)
    //         ct++;
    // }
    for (ll i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
            ct++;
    }

    cout << ct << endl;

    return 0;
}