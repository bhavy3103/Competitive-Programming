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

// int minSets(vector<int> a)
// {
//     int n = a.size();
//     int res = 1;
//     int s = a[0];
//     int m = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] == s + m)
//         {
//             m++;
//         }
//         else
//         {
//             res++;
//             s = a[i];
//             m = 1;
//         }
//     }
//     cout << res << endl;
// }

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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        int ct = 0;
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            if (map[v[i] - 1] == 0)
            {
                ct++;
                map[v[i]]++;
            }
            else
            {
                map[v[i] - 1]--;
                map[v[i]]++;
            }
        }
        cout << ct << endl;
    }

    // int n;
    // cin >> n;
    // int ct = 0;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // sort(a,a+n);
    // for (int i = 0; i < n; i++)
    // {
    //     if(a[i]==a[i+1])

    // }

    return 0;
}