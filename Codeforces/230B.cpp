#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000001] = {0};
    for (int i = 2; i <= 1000000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; i * j <= 1000001; j++)
            {
                a[i * j] = 1;
            }
        }
    }
    int x;
    cin >> x;
    long long int b;
    long long int sq;
    while (x--)
    {
        cin >> b;
        sq = sqrt(b);
        if (b == 1)
            cout << "NO" << endl;
        else if ((sq * sq == b) && (a[sq] == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define ff(i, a, b) for (ll i = a; i < b; i++)
// #define fb(i, a, b) for (ll i = a; i >= b; i--)
// #define min3(a, b, c) min(a, min(b, c))
// #define min4(a, b, c, d) min(a, min(b, min(c, d)))
// #define max3(a, b, c) max(a, max(b, c))
// #define max4(a, b, c, d) max(a, max(b, max(c, d)))
// #define asc_vs(v) sort(v.begin(), v.end())
// #define dsc_vs(v) sort(v.begin(), v.end(), greater<int>())
// #define asc_arr(a, n) sort(a, a + n)
// #define dsc_arr(a, n) sort(a, a + n, greater<int>())
// #define rev_vs(v) reverse(v.begin(), v.end())
// #define rev_arr(a) reverse(a, a + n)

// const ll N = 1e12;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     vector<ll> divisors;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = i; j < N; j++)
//         {
//             divisors[j].push_back(i);
//         }
//     }

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll p = divisors[n].size();
//         if (p == 3)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }