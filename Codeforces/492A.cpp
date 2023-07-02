#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, ct, i = 1;
    // cin >> n;
    // ct = n;
    // int sum = 0;
    // while (n >= 0)
    // {
    //     sum += i;
    //     n = n - sum;
    //     i++;
    // }
    // cout << ct / sum << endl;

    int n, ct = 0;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if (n - sum >= 0)
        {
            ct++;
            n -= sum;
        }
    }
    cout << ct << endl;

    return 0;
}