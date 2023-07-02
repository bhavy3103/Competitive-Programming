#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t], b[t], ct = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (b[j] == a[i])
            {
                ct++;
            }
        }
    }
    cout << ct << endl;

    return 0;
}