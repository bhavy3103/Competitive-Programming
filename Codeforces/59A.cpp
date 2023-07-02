#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ct1 = 0, ct2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            ct1++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            ct2++;
        }
    }
    if (ct1 > ct2)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i] - 32;
            }
            else
            {
                continue;
            }
        }
    }
    else if (ct1 <= ct2)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
            else
            {
                continue;
            }
        }
    }

    cout << s;

    return 0;
}