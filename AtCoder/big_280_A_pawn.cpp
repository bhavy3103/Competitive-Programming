#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;
    int ct = 0;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#')
            {
                ct++;
            }
        }
    }
    cout << ct << endl;

    return 0;
}