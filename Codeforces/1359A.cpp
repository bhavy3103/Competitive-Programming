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
        int n, m, k;
        cin >> n >> m >> k;
        int j;
        if (m == 0)
            cout << 0 << endl;
        else
        {
            j = n / k;
            int p = min(j, m);
            int q = ((m - p) + (k - 2)) / (k - 1);
            cout << p - q << endl;
            // if (n / k >= m)
            // {
            //     j = m;
            // }
            // else
            // {
            //     j = n / k;
            //     m = m - j;

            //     if (j - m >= 0 && k > 2)
            //         j = j - (m - (k - 1));
            //     else
            //         j = 0;
            // }
            // cout << j << endl;
        }
    }
    return 0;
}