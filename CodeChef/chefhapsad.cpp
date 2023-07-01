#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ct = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {

                if (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')
                {
                    if (s[i + 2] == 'a' || s[i + 2] == 'e' || s[i + 2] == 'i' || s[i + 2] == 'o' || s[i + 2] == 'u')
                    {
                        ct++;
                    }
                }
            }
        }
        if (ct > 0)
        {
            cout << "Happy" << endl;
        }
        else
        {
            cout << "Sad" << endl;
        }
    }
    return 0;
}