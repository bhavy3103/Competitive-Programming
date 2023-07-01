#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ct = 0;
        cin >> a >> b;
        for (int i = 1; i < 11; i++)
        {
            if (i - a == b - i)
            {
                cout << i << endl;
                ct++;
            }
        }
        if (ct == 0)
            cout << "-1" << endl;
    }
    return 0;
}