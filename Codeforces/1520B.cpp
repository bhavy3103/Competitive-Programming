#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // long long int n;
        // cin >> n;
        // if (n < 10)
        //     cout << n << endl;
        // else
        // {
        //     int p = n / 100;
        //     cout << n / 10 - 1 + 9 - p / 2;
        // }
        long long n, count = 0, start;
        cin >> n;
        for (int i = 1; i <= 9; i++)
        {
            start = i;
            while (start <= n)
            {
                count++;
                start = start * 10 + i;
            }
        }
        cout << count << endl;
    }
    return 0;
}