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
        ll a, b;
        cin >> a >> b;
        if (b == 1) // if i take b one so all three number are good.
            cout << "NO" << endl;
        else
            cout << "YES" << endl
                 << a << " " << a * b << " " << a * (b + 1) << endl;
        //     ll a, b, ct = 0;
        //     cin >> a >> b;
        //     ll p, q, r, z;
        //     r = a * b;
        //     p = a;
        //     q = a;
        //     z = p + q;
        //     if (z % r != 0 && (p % a != 0 && q % a != 0))
        //     {
        //         cout << "YES" << endl;
        //         cout << p << " " << q << " " << z << endl;
        //         ct++;
        //     }
        //     else
        //     {
        //         while (z % r != 0 && (p % a != 0 && q % a != 0))
        //         {
        //             p += a;
        //             z = p + q;
        //             if (z % r != 0 && (p % a != 0 && q % a != 0))
        //             {
        //                 cout << "YES" << endl;
        //                 cout << p << " " << q << " " << z << endl;
        //                 ct++;
        //             }
        //         }
        //     }
        //     if (ct == 0)
        //         cout << "NO" << endl;
        // }
    }
    return 0;
}