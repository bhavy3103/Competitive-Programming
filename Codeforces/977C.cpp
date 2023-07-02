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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ct = 0;
    ll sum = 0;
    if (k == 0)
        sum = a[0] - 1;
    else
        sum = a[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= sum)
            ct++;
    }

    if (ct != k || !(1 <= sum && sum <= 1000000001))
    {
        sum = -1;
        cout << sum << endl;
        return 0;
    }
    cout << sum << endl;

    return 0;
}