#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int p = 24 - h;
        int q = 60 - m;
        if (p == 1)
            cout << p * q << endl;
        else
            cout << ((p - 1) * 60) + q << endl;
    }
    return 0;
}