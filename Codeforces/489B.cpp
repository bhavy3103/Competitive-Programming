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
  int n, m;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cin >> m;
  int b[m];
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }
  sort(a, a + n);
  sort(b, b + m);
  int res = 0;
  bool flag = true;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      // cout << abs(a[i] - b[j]) << endl;
      if (abs(a[i] - b[j]) <= 1)
      {
        b[j] = 1000;
        res++;
        break;
      }
    }
  }
  cout << res << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}