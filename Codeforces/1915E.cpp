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
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long int a[n];
    // vector<int> o;
    // vector<int> e;
    // long long int sumo = 0, sume = 0;
    map<long long int, long long int> m;
    bool flag = true;
    long long int sum1 = 0, sum2 = 0;
    m[0]++;
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
      // if (i & 1)
      // {
      //   sumo += a[i];
      //   o.push_back(a[i]);
      // }
      // else
      // {
      //   sume += a[i];
      //   e.push_back(a[i]);
      // }
    }
    for (ll i = 0; i < n; i++)
    {
      if (i & 1)
      {
        sum2 += a[i];
      }
      else
      {
        sum1 += a[i];
      }
      if (m[sum2 - sum1])
      {
        cout << "YES" << endl;
        flag = false;
        break;
      }
      m[sum2 - sum1]++;
    }
    if (flag)
      cout << "NO" << endl;
  }
  return 0;
}