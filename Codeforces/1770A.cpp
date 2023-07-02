// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define ff(i, a, b) for (ll i = a; i < b; i++)
// #define fb(i, a, b) for (ll i = a; i >= b; i--)
// #define asc_vs(v) sort(v.begin(), v.end())
// #define dsc_vs(v) sort(v.begin(), v.end(), greater<int>())
// #define asc_arr(a, n) sort(a, a + n)
// #define dsc_arr(a, n) sort(a, a + n, greater<int>())
// #define rev_vs(v) reverse(v.begin(), v.end())
// #define rev_arr(a) reverse(a, a + n)

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m, sum1 = 0, sum2 = 0, sum = 0;
//         cin >> n >> m;
//         ll a[n], b[m];
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             sum1 += a[i];
//         }
//         for (ll i = 0; i < m; i++)
//         {
//             cin >> b[i];
//             sum2 += b[i];
//         }
//         sort(a, a + n);
//         // sort(b, b + m, greater<ll>());

//         ll i = 0, ct = 0;
//         ll j = m - 1;
//         ll c = min(n, m);
//         // if (m > n)
//         {
//             while (c--)
//             {
//                 sum1 -= a[i++];
//                 sum1 += b[j--];
//             }
//         }
//         // if (m > n)
//         // {
//         //     ct++;
//         //     while (n--)
//         //     {
//         //         sum += b[i];
//         //         i++;
//         //     }
//         // }
//         // else
//         // {
//         //     while (m--)
//         //     {
//         //         a[i] = b[i];
//         //         i++;
//         //     }
//         // }

//         // ll p = accumulate(a, a + n, 0);
//         // ll sum = 0;
//         // for (ll i = 0; i < n; i++)
//         // {
//         //     sum += a[i];
//         // }
//         if (ct == 0)
//             cout << sum1 << endl;
//         else
//             cout << sum << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i >= b; i--)
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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < m; i++)
        {
            /* code */
            int temp;
            ll x = INT_MAX;
            ff(i, 0, n)
            {
                if (a[i] < x)
                {
                    temp = i;
                    x = a[i];
                }
            }
            a[temp] = b[i];
        }
        ll p = 0;
        for (int i = 0; i < n; i++)
        {
            p += a[i];
        }

        cout << p << endl;
    }

    return 0;
}