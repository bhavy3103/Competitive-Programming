#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ct = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                ct = 0;
                continue;
            }
            else
            {
                ct++;
                if (ct >= 4)
                {
                    break;
                }
            }
        }
        if (ct >= 4)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}