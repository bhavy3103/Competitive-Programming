#include <bits/stdc++.h>
using namespace std;
#define ib_ss (ios_base::sync_with_stdio(false))
#define buff cin.tie(NULL);
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
    int a, b, d, m;
    cin >> a >> b;
    int h = a;
    while (a >= b)
    {
        d = a / b;
        h += d;
        m = a % b;
        a = d + m;
        // cout << a << endl;
    }
    cout << h << endl;
    return 0;
}