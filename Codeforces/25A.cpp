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
    int n;
    cin >> n;
    int a[n];
    int ct1 = 0, ct2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
            ct1++;
        else
            ct2++;
    }
    if (ct1 > ct2)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 == 0)
                cout << i << endl;
            // break;
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 != 0)
                cout << i << endl;
            // break;
        }
    }

    return 0;
}