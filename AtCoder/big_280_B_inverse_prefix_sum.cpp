#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cout << a[0] << " ";
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] - temp << " ";
        temp = a[i];
    }

    return 0;
}