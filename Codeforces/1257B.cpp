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
        ll x, y;
        cin >> x >> y;
        if (x == y)
            cout << "YES" << endl;
        else
        {
            if (x > 3)
                cout << "YES" << endl;
            else if (x == 1)
            {
                if (y == 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                if (y <= 3)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            // else if ((x == 1 || x == 2 || x == 3) && y > 4)
            //     cout << "NO" << endl;
            // else if ((x == 2 || x == 3) && y > 4)
            //         cout
            //     << "NO" << endl;
            // else cout << "YES" << endl;
        }
    }

    return 0;
}