#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        if (n > 1 && n < 3)
        {
            cout << "I hate that ";
            n--;
            cout << "I love it ";
            n--;
        }
        else if (n < 2)
        {
            cout << "I hate it ";
            n--;
        }
        else if (n > 1)
        {
            cout << "I hate that ";
            n--;
            cout << "I love that ";
            n--;
        }
    }

    return 0;
}