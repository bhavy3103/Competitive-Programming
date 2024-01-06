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
  // int n;
  // cin >> n;
  // int a[n];
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> a[i];
  // }
  // int m;
  // cin >> m;
  // int b[m];
  // for (int i = 0; i < m; i++)
  // {
  //   cin >> b[i];
  // }
  // vector<pair<int, int>> v;
  // int temp1 = 1;
  // int temp = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   temp += a[i];
  //  // cout << temp << endl;
  //   v.push_back(make_pair(temp1, temp));
  //   // cout << temp1 << " " << temp << endl;
  //   temp1 = temp + 1;
  // }
  // vector<int> res;
  // for (int i = 0; i < n; i++)
  // {
  //   res.push_back(v[i].second);
  // }

  // sort(b, b + m);
  // int j = 0;
  // vector<pair<int, int>> vt;
  // for (int i = 0; i < n; i++)
  // {
  //   if (b[j] <= res[i])
  //   {
  //     cout << i + 1 << endl;
  //     vt.push_back(make_pair(b[j], i + 1));
  //     j++;
  //   }
  //   if (j > m)
  //   {
  //     break;
  //   }
  // }
  int n, m, t, sum(0);
  cin >> n;
  int counts[n];

  for (int i = 0; i < n; i++)
  {
    cin >> t;
    sum += t;
    counts[i] = sum;
  }

  int ind(0), worms[sum + 1];

  for (int i = 1; i <= sum; i++)
  {
    if (i > counts[ind])
      ind++;
    worms[i] = ind + 1;
  }

  cin >> m;

  for (int i = 0; i < m; i++)
  {
    cin >> t;
    cout << worms[t] << endl;
  }
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