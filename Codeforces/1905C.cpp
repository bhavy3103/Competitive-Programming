#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_operations_to_sorted(string s)
{
  int n = s.length();
  vector<int> suffix_max(n, 0);

  suffix_max[n - 1] = s[n - 1] - 'a';

  for (int i = n - 2; i >= 0; i--)
  {
    suffix_max[i] = max(suffix_max[i + 1], s[i] - 'a');
  }

  int operations = 0;
  int last_max = -1;

  for (int i = 0; i < n; i++)
  {
    if (s[i] - 'a' < i)
    {
      return -1; // It's impossible to make the string sorted
    }

    if (s[i] - 'a' == i)
    {
      break;
    }

    if (s[i] - 'a' == suffix_max[i])
    {
      operations++;
      last_max = i;
    }
  }

  return operations;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int result = min_operations_to_sorted(s);
    cout << result << endl;
  }

  return 0;
}
