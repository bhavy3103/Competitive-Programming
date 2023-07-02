#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    int p, ct = 0;
    cin >> n;
    while (n != 0)
    {
        p = n % 10;

        if (p == 4 || p == 7)
        {
            ct = 0;
        }
        else if (p != 4 || p != 7)
        {
            ct++;
            break;
        }
        n = n / 10;
    }
    if (ct > 0)
        cout << "NO";
    else if (ct == 0)
        cout << "YES";

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}