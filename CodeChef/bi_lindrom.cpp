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
    for (int i = 0; i < t; i++)
    {
        int n;
        string str;
        cin >> n >> str;
        bool f = true;
        int a[26] = {0};
        for (int i = 0; i < n; i++)
        {
            a[str[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] > 1)
            {
                cout << n - 2 << endl;
                f = false;
                break;
            }
        }
        if (f)
            cout << "-1\n";
    }

    // {
    // int n;
    // cin >> n;
    // string str;
    // cin >> str;
    // unordered_map<char, int> m;
    // vector<int> v;
    // bool f = true;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     m[str[i]]++;
    // }
    // for (auto it : m)
    // {
    //     v.push_back(it.second);
    // }
    // asc_vs(v);
    // int k = *min_element(v.begin(), v.end());
    // if (k > 1)
    // {
    //     cout << n - k << endl;
    //     f = false;
    // }
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         if (v[i] > 1)
    //         {
    //             cout << n - v[i] << endl;
    //             f = false;
    //         }
    //     }
    //     if (f)
    //         cout << -1 << endl;
    // }

    return 0;
}