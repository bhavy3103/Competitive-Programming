#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int p = pow(2, b);
        while (a--)
        {
            p = p / 2;
        }
        cout << p << endl;
    }
    return 0;
}