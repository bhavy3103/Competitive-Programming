#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    long long sum = 0;
    cin >> t >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sum = a[0] - 1;
    int j = n - 1;
    int i = 1;
    while (j--)
    {
        // cout << sum << endl;
        if (a[i] >= a[i - 1])
        {
            sum = sum + (a[i] - a[i - 1]);
            // cout << sum << endl;
        }
        else if (a[i] < a[i - 1])
        {
            sum = sum + (t - ((a[i - 1] - a[i])));
            // cout << sum << endl;
        }
        i++;
        // if (i >= t)
        // i = 1;
    }
    cout << sum << endl;

    return 0;
}