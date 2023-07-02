#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ct = 0, p, q;
    for (int i = 1; i <= n / 2; i++)
    {
        p = n - i;
        if (p % i == 0)
            ct++;
    }
    cout << ct << endl;

    return 0;
}