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
        ll n, p, q;
        cin >> n;
        // vector<ll> v;
        for (int i = 1; i < n; i++)
        {
            p = pow(i, 2);
            q = n / p;
            for (int j = 1; j < n; j++)
            {
                if (j == q)
                {
                    cout << p << " " << q << endl;
                }
            }
        }

        // v.push_back(3);
        // ll i = 3;
        // for (int j = 2; j < n / 2; j++)
        // {
        //     if (i % j != 0)
        //         v.push_back(i);
        // }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << endl;
        // }
    }

    return 0;
}