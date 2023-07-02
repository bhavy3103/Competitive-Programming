#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + 3);
    long long int sum1 = 1, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
    for (int i = 0; i < 3; i++)
    {
        sum1 *= a[i];
        sum3 += a[i];
        // cout << sum1 << endl;
    }
    sum2 = (a[0] + a[1]) * a[2];
    sum5 = (a[1] + a[2]) * a[0];
    sum2 = max(sum2, max(sum4, sum5));
    cout << max(sum1, max(sum2, sum3)) << endl;

    return 0;
}