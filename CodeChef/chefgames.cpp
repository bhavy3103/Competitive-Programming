#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ct = 0;
        int a[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                ct++;
            }
        }
        if (ct > 0)
        {
            cout << "OUT" << endl;
        }
        else
        {
            cout << "IN" << endl;
        }
    }
    return 0;
}