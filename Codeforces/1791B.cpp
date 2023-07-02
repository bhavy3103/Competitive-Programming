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
        string s;
        cin >> s;
        bool f = true;
        int x = 0, y = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'U')
            {
                y += 1;
            }
            else if (s[i] == 'R')
            {
                x += 1;
            }
            else if (s[i] == 'L')
            {
                x -= 1;
            }
            else if (s[i] == 'D')
            {
                y -= 1;
            }
            if (x == 1 && y == 1)
            {
                cout << "YES" << endl;
                f = false;
                break;
            }
        }
        if (f)
            cout << "NO" << endl;
    }

    return 0;
}