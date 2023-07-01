#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    while (n--)
    {
        int ct = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < 4; i++)
        {
            if (a[i] > a[0])
            {
                ct++;
            }
        }
        cout << ct << endl;
    }
    return 0;
}