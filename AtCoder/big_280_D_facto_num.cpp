#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
// const int M = 1e12 + 10;
long long fact[N];

int isprime(int n)
{
  int ct1 = 0;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 2)
    {
      ct1++;
      break;
      return ct1;
    }
  }
  return 1;
}
int main()
{
  long long int t;
  cin >> t;
  fact[0] = fact[1] = 1;
  for (int i = 2; i < N; i++)
  {
    fact[i] = (fact[i - 1] * i);
  }
  if (t % 2 != 0)
  {
    int p = isprime(t);
    if (p == 1)
    {
      cout << t << endl;
    }
  }
  // cout << t << endl;
  else
  {
    int ct = 0;
    for (int i = 2; i < N; i++)
    {
      if (fact[i] % t == 0)
      {
        ct = i;
        break;
      }
      else
      {
        ct = 0;
      }
    }
    cout << ct << endl;
  }

  // if (ct == 0)
  //   cout << t << endl;
  // else
  //   cout << ct << endl;

  return 0;
}