#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c1 = 0, c2 = 0, c3 = 0, f = 0;
    cin >> n;
    int a;
    // int a[n];
    vector<int> a1, a2, a3;
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> a[i];
    // }

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            c1++;
            a1.push_back(i);
        }
        else if (a == 2)
        {
            c2++;
            a2.push_back(i);
        }
        else if (a == 3)
        {
            c3++;
            a3.push_back(i);
        }
    }
    f = min(min(c1, c2), c3);
    cout << f << endl;
    for (int i = 0; i < f; i++)
    {
        cout << a1[i] << " " << a2[i] << " " << a3[i] << endl;
    }

    return 0;
}