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
        int n;
        cin >> n;
        int a[n][n - 1];
        vector<int> v;
        int mx = 0, mele = 0, k = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (n - 1); j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            m[a[i][0]]++;
        }
        for (auto it : m)
        {
            if (it.second > mx)
            {
                mx = it.second;
                mele = it.first;
            }
        }
        // cout << mele << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] != mele)
            {
                k = i;
            }
        }
        n--;
        int s = 0;
        v.push_back(mele);
        while (n--)
        {
            v.push_back(a[k][s]);
            s++;
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}