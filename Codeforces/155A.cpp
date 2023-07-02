#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, tt;
        double ft;
        cin >> n;
        tt = (n * 2.5);
        ft = (tt % 25);
        if (ft == 0)
        {
            cout << tt / 25 << endl;
        }
        else if (ft < 0 && ft > 15)
        {
            cout << (tt / 25) + 20 << endl;
        }
        else
        {
            cout << (tt / 25) + 15 << endl;
        }
    }
    return 0;
}