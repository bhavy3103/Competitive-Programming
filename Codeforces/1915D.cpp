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

bool isVowel(char ch)
{
  ch = std::tolower(ch);

  return std::isalpha(ch) && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

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
    string p;
    cin >> p;
    cout << p[0];
    for (int i = 1; i < n - 1; i++)
    {
      if (p[i] == 'a' || p[i] == 'e')
        cout << p[i];
      else
      {
        if (p[i + 1] == 'a' || p[i + 1] == 'e')
          cout << "." << p[i];
        else
          cout << p[i];
      }
    }
    cout << p.back() << endl;

    // vector<char> d;
    // cin >> p;
    // for (int i = p.length(); i >= 2; i--)
    // {
    //   if (isVowel(p[i]) && !isVowel(p[i - 1]))
    //   {
    //     d.push_back(p[i]);
    //     d.push_back(p[i - 1]);
    //     i -= 2;
    //     d.push_back('.');
    //   }
    //   else if (!isVowel(p[i]) && isVowel(p[i - 1]) && !isVowel(p[i - 2]))
    //   {
    //     d.push_back(p[i]);
    //     d.push_back(p[i - 1]);
    //     d.push_back(p[i - 2]);
    //     i -= 3;
    //     d.push_back('.');
    //   }
    // }
    // for (int i = d.size(); i >= 0; i--)
    // {
    //   cout << d[i];
    // }
    // cout << endl;
  }
  return 0;
}