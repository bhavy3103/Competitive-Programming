#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, m, sum = 0;
        cin >> a >> b >> c >> n;
        sum = a / 2 + b / 2 + c / 2;
        if (sum <= m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}