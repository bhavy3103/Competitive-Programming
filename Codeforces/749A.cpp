#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n / 2;
    cout << k << endl;
    if (n % 2 != 0)
    {
        k = (n - 3) / 2;
        for (int i = 0; i < k; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            cout << 2 << " ";
        }
    }

    return 0;
}