#include <bits/stdc++.h>

#define int long long
#define pb emplace_back
#define mp make_pair
#define x first
#define y second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

typedef long double ld;
typedef long long ll;

using namespace std;

mt19937 rnd(143);

const int inf = 1e15;
const int M = 1e9 + 7;
const ld pi = atan2(0, -1);
const ld eps = 1e-6;

void solve()
{
    int n;
    cin >> n;
    int time, h, m;
    cin >> h >> m;
    time = 60 * h + m;
    int ans = 24 * 60;
    for (int i = 0; i < n; ++i)
    {
        cin >> h >> m;
        int t = 60 * h + m - time;
        if (t < 0)
            t += 24 * 60;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60;
}

bool multi = true;

signed main()
{
    int t = 1;
    if (multi)
        cin >> t;
    for (; t; --t)
    {
        solve();
        cout << endl;
    }
    return 0;
} // #include <bits/stdc++.h>
  // using namespace std;

// int main()
// {
//     int t, k;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int time, h, m;
//         cin >> h >> m;
//         time = 60 * h + m;
//         int ans = 24 * 60;
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> h >> m;
//             int t = 60 * h + m - time;
//             if (t < 0)
//                 t += 24 * 60;
//             ans = min(ans, t);
//         }
//         cout << ans / 60 << " " << ans % 60;
//         // cin >> k;
//         // int m, n, sum = 0, minn = INT16_MAX;
//         // cin >> m >> n;
//         // int gt = 60 * m + n;
//         // // vector<pair<int, int>> j;
//         // // j.push_back(make_pair(m, n));
//         // vector<pair<int, int>> v;
//         // int tt = 24 * 60;
//         // for (int i = 0; i < k; i++)
//         // {
//         //     int p, q, tt = 0;
//         //     cin >> p >> q;
//         //     v.push_back(make_pair(p, q));
//         //     sum = 60 * p + q - gt;
//         //     tt = sum;
//         //     // if (k == 1)
//         //     // {
//         //     //     cout << sum / 60 << " " << sum % 60 << endl;
//         //     //     break;
//         //     // }
//         //     // else if (p == m && q == n)
//         //     // {
//         //     //     // cout << 0 << " " << 0 << endl;
//         //     //     sum = 0;
//         //     //     break;
//         //     // }
//         //     if (sum < 0)
//         //     {
//         //         sum += 24 * 60;
//         // if (sum < minn)
//         // minn = sum;
//         //         tt = min(tt, sum);
//         //     }
//         //     // cout << sum << endl;
//         // }
//         // cout << (tt / 60) << " " << tt % 60 << endl;
//     }

//     return 0;
// }