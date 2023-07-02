#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, sub;
    int flag = 1;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!flag)
            {
                cout << " ";
            }
            continue;
        }
        else
        {
            flag = 0;
            cout << s[i];
        }
        // cin >> s;
        // sub = "WUB";
        // int ct = 0, t;
        // for (int i = 0; i < s.length(); i++)
        // {
        //     if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        //         ct++;
        //     else
        //         continue;
        // }
        // // cout << ct << endl;
        // t = ct;
        // while (t--)
        // {
        //     size_t it = s.find(sub);
        //     if (it != string::npos)
        //     {
        //         s.erase(it, sub.length());
        //     }
        // }
    }

    return 0;
}