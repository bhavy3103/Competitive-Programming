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
    string s, p = "abcdefghijklmnopqrstuvwxyz";
    int k;
    int a[26];
    cin >> s >> k;
    for (int i = 0; i < 26; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    int i;
    for (i = 0; i < s.length(); i++)
    {
        int ct = 0;
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == p[j])
            {
                sum += (i + 1) * a[j];
            }
        }
        // cout << sum << " ";
    }

    ll q = *max_element(a, a + 26);
    while (k--)
    {
        sum += (i + 1) * q;
        i++;

        // cout << sum << " ";
    }
    cout << sum << endl;

    return 0;
}