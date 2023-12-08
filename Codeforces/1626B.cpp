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

    int n = s.length();
    string ans = "";
    bool flag = false;
    int i;

    for (i = n - 1; i > 0; --i)
    {
      int sum = (s[i] - '0') + (s[i - 1] - '0');
      if (sum >= 10)
      {
        string str = to_string(sum);
        // reverse(all(str));
        rev_vs(str);
        ans += str;
        flag = true;
        break;
      }
      else
        ans += s[i];
    }

    if (!flag)
    {
      int sum = (s[0] - '0') + (s[1] - '0');
      string str = to_string(sum);
      ans = str;

      for (int j = 2; j < n; ++j)
        ans += s[j];
    }
    else
    {

      i -= 2;

      while (i >= 0)
      {
        ans += s[i];
        --i;
      }
      // reverse(all(ans));
      rev_vs(ans);
    }

    cout << ans << endl;

    //   string s, res = "", demo, f = "";
    //   cin >> s;
    //   demo = s;
    //   vector<int> v;
    //   for (int i = 0; i < s.length() - 1; i++)
    //   {
    //     char c1 = s[i], c2 = s[i + 1];
    //     int n1 = c1 - '0', n2 = c2 - '0';
    //     int res1 = n1 + n2;
    //     if (res1 / 10 > 0)
    //     {
    //       n1 = res1 / 10, n2 = res1 % 10;
    //       c1 = char(n1 + '0'), c2 = char(n2 + '0');
    //       s[i] = c1, s[i + 1] = c2;
    //       v.push_back(stoi(s));
    //     }
    //     else
    //     {
    //       n1 = res1 % 10;
    //       c1 = char(n1 + '0');
    //       s[i] = c1;
    //       s = s.substr(0, i + 1) + s.substr(i + 2);
    //       v.push_back(stoi(s));
    //     }
    //     s = demo;
    //   }
    //   // Include the last digit of the original string
    //   // v.push_back(stoi(s));

    //   dsc_vs(v);

    //   cout << v[0] << endl;
  }

  return 0;
}
