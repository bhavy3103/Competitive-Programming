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

void solve()
{
  int n;
  cin >> n;
  // vector<int> v;
  // int k;
  // int res = 0;
  // for (int i = 1; i <= n; i++)
  // {
  //   cin >> k;
  //   v.push_back(k);
  //   if (k == i)
  //     res++;
  // }
  // cout << (res) * (res - 1) / 2 << endl;
  map<ll, ll> m;
  ll res = 0;
  int x;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    x -= i;
    res += m[x];
    cout << m[x] << endl;
    // cout << res << endl;
    m[x]++;
    cout << m[x] << endl;
  }
  // cout << res << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}