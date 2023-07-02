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

int remove0(int n)
{
    int m(0), pow(1);
    while (n != 0)
    {
        int d = n % 10;
        n /= 10;
        if (d != 0)
        {
            m += d * pow;
            pow *= 10;
        }
    }
    return m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int c = a + b;
    int A = remove0(a);
    int B = remove0(b);
    int C = remove0(c);
    cout << (A + B == C ? "YES" : "NO") << endl;
    // ll a, b, c;
    // cin >> a >> b;
    // // c = a + b;
    // ll s1 = 0, s2 = 0, s3 = 0;
    // ll m = 0, n = 0;
    // int ct1 = 0, ct2 = 0;
    // // ll c = a + b;
    // while (a > 0)
    // {
    //     int p = a % 10;
    //     m = m * 10 + p;
    //     a = a / 10;
    // }
    // a = m;
    // while (b > 0)
    // {
    //     int p = b % 10;
    //     n = n * 10 + p;
    //     b = b / 10;
    // }
    // b = n;
    // c = a + b;
    // while (a > 0)
    // {
    //     int p = a % 10;
    //     if (p == 0)
    //     {
    //         a = a / 10;
    //         ct1++;

    //         // continue;
    //     }
    //     else
    //     {
    //         s1 = s1 * 10 + p;
    //         a = a / 10;
    //     }
    // }
    // while (b > 0)
    // {
    //     int p = b % 10;
    //     if (p == 0)
    //     {
    //         b = b / 10;
    //         ct2++;
    //         // continue;
    //     }
    //     else
    //     {
    //         s2 = s2 * 10 + p;
    //         b = b / 10;
    //     }
    // }
    // while (c > 0)
    // {
    //     int p = c % 10;
    //     if (p == 0)
    //     {
    //         c = c / 10;
    //         // continue;
    //     }
    //     else
    //     {
    //         s3 = s3 * 10 + p;
    //         c = c / 10;
    //     }
    // }
    // // cout << s1 << " " << s2 << " " << s3 << endl;
    // if (a + b == c && s3 == s1 + s2)
    //     cout << "YES" << endl;
    // else if (ct1 == 0 && ct2 == 0)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;

    return 0;
}