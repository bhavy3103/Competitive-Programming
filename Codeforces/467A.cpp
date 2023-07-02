#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ct = 0;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if ((b - a) >= 2)
            ct++;
    }
    cout << ct;
    return 0;
}