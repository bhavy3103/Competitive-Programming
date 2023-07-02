#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s;
    // cin >> s;
    // string b = s;
    // int ct = 0;
    // if (s[0] >= 65 || s[0] <= 90)
    // {
    //     s[0] -= 32;
    // }
    // for (int i = 1; i < s.length(); i++)
    // {
    //     if (s[i] >= 'A' || s[i] <= 'Z')
    //     {
    //         s[i] += 32;
    //     }
    //     else if (s[i] >= 'a' || s[i] <= 'z')
    //     {
    //         ct++;
    //     }
    // }
    // if (ct > 0)
    // {
    //     for (int i = 0; i < b.length(); i++)
    //     {
    //         cout << b[i];
    //     }
    // }
    // else
    // {
    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         cout << s[i];
    //     }
    // }

    // return 0;

    string s;
    char u;
    bool c = true;
    cin >> s;

    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            c = false;
        }
    }

    if (c == true)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;
    return 0;
}