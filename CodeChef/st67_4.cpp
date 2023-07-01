#include <bits/stdc++.h>
using namespace std;
// #define long long int long long int
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, p;
        cin >> n >> p;
        long long int ct = (n * (n - 1)) / 2;
        if (p < n / 2)
        {
            long long int s = n - 2 * p;
            ct = ct - (s * (s - 1)) / 2;
        }
        cout << ct << endl;
    }
    return 0;
}