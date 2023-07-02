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
    int a[n], b[n];
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        // int k;
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        vp.push_back(make_pair(b[i], i));
    }
    sort(vp.begin(), vp.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (a[i] == vp[j].first)
            {
                cout << vp[j].second << " ";
            }
        }
    }

    return 0;
}