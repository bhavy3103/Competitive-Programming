#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, sum = 0, mn = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        sum = sum - a;
        sum = sum + b;
        if (sum > mn)
        {
            mn = sum;
        }
    }

    cout << mn;

    return 0;
}