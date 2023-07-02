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
//     int n, p, k, ct = 0, sum = 0;
//     cin >> n;
//     vector<int> v;
//     map<int, int> m;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> p;
//         m[p]++;
//     }

//     for (auto it : m)
//     {
//         v.push_back(it.second);
//     }
//     ct = v[3];
//     // cout << ct << endl;
//     if (v[1] % 2 == 0)
//         ct += (2 * v[1]) / 4;
//     else
//     {
//         ct += (2 * v[1]) / 4;
//         sum = (2 * v[1]) % 4;
//         // cout << sum << endl;
//     }
//     // cout << ct << endl;
//     while (v[0]-- && v[2]--)
//     {
//         ct++;
//     }
//     // cout << ct << endl;
//     if (v[2]--)
//     {
//         ct++;
//     }
//     // cout << ct << endl;
//     if (v[0] != 0 && sum > 0)
//     {
//         v[0] = v[0] - 2;

//         int h = v[0] % 4;
//         if (h == 0)
//             ct += h / 4;
//         else
//             ct += h / 4 + 1;
//     }
//     cout << ct << endl;

//     // int a[n], sum = 0, ct = 0;
//     // ff(i, 0, n)
//     //         cin >>
//     //     a[i];
//     // sum = a[0];
//     // ct++;
//     // ff(i, 1, n)
//     // {
//     //     if (sum + a[i] <= 4)
//     //         sum += a[i];
//     //     else
//     //         ct++;
//     // }
//     // cout << ct << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n];
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == 1)
            a++;
        if (s[i] == 2)
            b++;
        if (s[i] == 3)
            c++;
        if (s[i] == 4)
            d++;
    }
    int ans = d + c;
    a -= c;
    if (b % 2 == 0)
        ans += b / 2;
    else
    {
        ans += b / 2 + 1;
        a -= 2;
    }
    if (a > 0)
    {
        if (a % 4)
            ans += a / 4 + 1;
        else
            ans += a / 4;
    }
    cout << ans;
    return 0;
}