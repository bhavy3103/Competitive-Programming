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
        int a[n];
        int b = 1;
        bool f = true;
        int mx = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        asc_arr(a, n);
        rev_arr(a);
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        // if (n == 1)
        //     cout << "Marichka" << endl;
        // else
        // {
        // vector<int> v1, v;
        // for (int i = 0; i < n; i++)
        // {
        //     m[a[i]]++;
        // }
        // int s = 0;
        for (auto it : m)
        {
            if (it.second % 2)
            {
                f = true;
                b = 0;
                break;
            }
            // // cout << it.second << " ";
            // v1.push_back(it.second);
            // // s++;
        }
        if (b)
            cout << "Zenyk" << endl;
        else
            cout << "Marichka" << endl;
        // set<int, int> p[v1.size()];
        // for (auto it : m)
        // {
        //     p[s] = {it.first, it.second};
        //     s++;
        // }
        // for (int i = 0; i < v1.size(); i++)
        // {
        //     v.push_back(p[i].first);
        // }

        // sort(p.begin(), p.end());
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
        // dsc_vs(v);
        // for (int i = 0; i < v.size(); i++)
        // {
        //     if (v[i] == 1)
        //     {
        //         cout << "Marichka" << endl;
        //         break;
        //     }
        //     else if (v[i] % 2 == 0)
        //     {
        //         cout << "Zeynk" << endl;
        //         break;
        //     }
        //     else
        //     {
        //         cout << "Marichka" << endl;
        //         break;
        //     }
        // }
        // }
    }

    return 0;
}