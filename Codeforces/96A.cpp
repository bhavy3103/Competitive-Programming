#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
            if (c == 7)
            {
                cout << "YES" << endl;
                break;
            }
        }
        else
        {
            c = 1;
        }
    }

    if (c != 7)
        cout << "NO" << endl;
    return 0;
}