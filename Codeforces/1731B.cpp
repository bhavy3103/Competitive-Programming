#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int M = 1e9 + 7;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long int> v;
        long long int r;
        long long int sum = 0, sum2 = 0, fsum = 0, a, b, c, d;
        if (n == 1)
            cout << 2022 << endl;
        else if (n == 2)
            cout << 14154 << endl;
        else
        {
            a = n * (n + 1);
            a = a % M;
            b = (2 * n + 1);
            b = b % M;
            c = n * (n - 1);
            c = c % M;
            d = (2 * (n + 1));
            d = d % M;

            sum = (a * b) % M;
            sum2 = (c * d) % M;
            // sum = sum % M;
            // sum2 = sum2 % M;
            sum = (337 * (sum)) % M;
            sum2 = (337 * (sum2)) % M;
            sum = (sum + sum2) % M;
            cout << sum << endl;
        }
    }
    return 0;
}