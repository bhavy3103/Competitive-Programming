#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << fixed << setprecision(12) << sum / n;
    return 0;
}