#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, b, d, sum = 0, ct = 0;
    cin >> t >> b >> d;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= b)
        {
            sum += n;
        }

        if (sum > d)
        {
            ct++;
            sum = 0;
        }
    }
    cout << ct << endl;

    return 0;
}