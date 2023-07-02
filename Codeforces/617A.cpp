#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    t = n / 5;
    if (n % 5 > 0)
    {
        t++;
    }
    cout << t;

    return 0;
}