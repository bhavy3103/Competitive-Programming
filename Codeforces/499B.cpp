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
    string s;
    int n, m;
    cin >> n >> m;
    string a[m], b[m], c[m], d[n];
    for (int i = 0; i < m; i++)
    {
        string p, q;
        cin >> p >> q;
        a[i] = p;
        b[i] = q;
        if (p.length() <= q.length())
            c[i] = p;
        else
            c[i] = q;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (d[i] == a[j])
            {
                s += c[j];
            }
        }
        s += " ";
    }
    cout << s << endl;

    return 0;
}