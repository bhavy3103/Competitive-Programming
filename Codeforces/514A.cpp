#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    if (s[i] == '9')
    {
        i++;
    }
    while (i < s.length())
    {
        if (s[i] >= '5')
        {
            s[i] = ('9' - s[i]) + '0';
        }
        i++;
    }
    cout << s << endl;

    // long long int n;
    // cin >> n;
    // while (n > 0)
    // {
    //     if (n % 10 >= 5)
    //     {
    //         cout << 9 - (n % 10);
    //     }
    //     else
    //     {
    //         cout << n % 10;
    //     }
    //     n = n / 10;
    // }
    return 0;
}