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

const int N = 1e5 + 5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    int a[N];
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
        a[v[i]] = i + 1;
    }
    ll p1 = 0, p2 = 0;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        p1 += a[q];
        p2 += n - a[q] + 1;
    }
    cout << p1 << " " << p2 << endl;
    return 0;
}