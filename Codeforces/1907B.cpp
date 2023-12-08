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
    string s;
    cin >> s;
    int lb = 0, ub = 0;
    string res;
    for (int i = s.length() - 1; i >= 0; i--)
    {
      if (s[i] == 'b')
        lb++;
      else if (s[i] == 'B')
        ub++;
      else if (s[i] >= 'a' && s[i] <= 'z')
      {
        if (lb > 0)
          lb--;
        else
          res.push_back(s[i]);
      }
      else if (s[i] >= 'A' && s[i] <= 'Z')
      {
        if (ub > 0)
          ub--;
        else
          res.push_back(s[i]);
      }
    }
    rev_vs(res);
    cout << res << endl;
  }
  return 0;
}