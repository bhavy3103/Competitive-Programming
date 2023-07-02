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
    int t;
    cin >> t;
    while (t--)
    {
        ll x1, x2, p1, p2, sum1 = 1, sum2 = 1;
        cin >> x1 >> p1 >> x2 >> p2;
        int mn = min(p1, p2);
        p1 -= mn;
        p2 -= mn;
        if (p1 >= 7)
            cout << ">" << endl;
        else if (p2 >= 7)
            cout << "<" << endl;
        else
        {
            for (int i = 0; i < p1; ++i)
                x1 *= 10;
            for (int i = 0; i < p2; ++i)
                x2 *= 10;
            if (x1 < x2)
                cout << "<" << endl;
            else if (x1 > x2)
                cout << ">" << endl;
            else
                cout << "=" << endl;
            // while (p1--)
            // {
            //     sum1 *= 10;
            // }
            // while (p2--)
            // {
            //     sum2 *= 10;
            // }
            // // cout << sum1 << " " << sum2 << endl;
            // x1 *= sum1;
            // x2 *= sum2;
            // if (x1 > x2)
            //     cout << ">" << endl;
            // else if (x1 < x2)
            //     cout << "<" << endl;
            // else
            //     cout << "=" << endl;
        }
    }
    return 0;
}