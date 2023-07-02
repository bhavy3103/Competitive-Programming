#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long int k, sum, j;
        cin >> n >> k;
        sum = n;
        if (n % 2 == 0)
        {
            j = 2 * k;
            sum += j;
            cout << sum << endl;
        }
        else
        {
            j = isprime(n);
            sum += j;
            sum += 2 * (k - 1);
            cout << sum << endl;
        }
    }

    return 0;
}