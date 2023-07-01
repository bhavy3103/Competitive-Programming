#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= m)
        {
            sum += a[i] * (-1);
        }
    }
    cout << sum;

    return 0;
}