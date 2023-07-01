#include <bits/stdc++.h>
using namespace std;

string s()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
    {
        return "YES";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (s[i + 1] == '1')
                {
                    i++;
                }
                else
                {
                    return "NO";
                }
            }
        }
        return "YES";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << s() << endl;
    }
    return 0;
}