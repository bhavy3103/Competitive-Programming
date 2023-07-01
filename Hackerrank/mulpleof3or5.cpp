#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            if (i % 5 == 0 || i % 3 == 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}