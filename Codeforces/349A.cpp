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
    ll n, sum = 0;
    int ct25 = 0, ct50 = 0, ct100 = 0;
    cin >> n;
    bool flag = true;
    int a[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 25)
        {
            ct25++;
        }
        else if (a[i] == 50)
        {
            if (ct25 >= 1)
            {
                ct50++;
                ct25--;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else if (a[i] == 100)
        {
            ct100++;
            if (ct25 > 0 && ct50 > 0)
            {
                ct25--;
                ct50--;
            }
            else if (ct25 >= 3)
            {
                ct25 -= 3;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}