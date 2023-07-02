#include <bits/stdc++.h>
using namespace std;
int t, a, p[101];

int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a;
        p[a] = i;
    }
    for (int i = 1; i <= t; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}