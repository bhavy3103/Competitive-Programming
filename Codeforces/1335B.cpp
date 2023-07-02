#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s, p;
        p = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < n; i++)
        {
            s = s + p[i];
        }
        int i = 0;
        for (int j = 0; j < n; j++)
        {
            cout << s[i];
            i++;
            if (i == b)
                i = 0;
        }
        cout << endl;
    }
    return 0;
}