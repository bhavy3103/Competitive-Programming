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
  ll l;
  cin >> n >> l;
  ll a[n];
  int diff = 0, temp = 0;
  bool flag = false;
  bool flagEnd = false;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == 0)
      flag = true;
    if (a[i] == l)
      flagEnd = true;
  }
  sort(a, a + n);
  for (int i = 0; i < n - 1; i++)
  {
    diff = a[i + 1] - a[i];
    if (diff > temp)
      temp = diff;
  }
  // cout << l - a[n - 1] << endl;
  double maxdiff;
  if (!flag || !flagEnd)
    maxdiff = max3(a[0] * 1.0, temp / 2.0, (l - a[n - 1]) * 1.0);
  else
    maxdiff = (temp / 2.0);
  cout << fixed << setprecision(10) << maxdiff << endl;
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