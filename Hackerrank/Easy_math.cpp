#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, sum = 0;
        cin >> x;
        int t = x;
        for (int i = 2; i < 100; i++)
        {
            if (x == 4)
            {
                cout << "2" << endl;
                break;
            }
            else if (x >= 40)
            {
                if (x % 40 == 0 || x % 400 == 0 || x % 4000 == 0)
                {
                    sum = t * i;
                    break;
                }
            }
            cout << sum << endl;
        }
        }
    return 0;
}