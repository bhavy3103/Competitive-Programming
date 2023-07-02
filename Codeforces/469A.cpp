#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, o, ct = 0;
    cin >> n >> m;
    
    int a[300];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cin >> o;
    for (int i = m; i < (m + o); i++)
    {
        cin >> a[i];
    }
    sort(a, a + (m + o));
    for (int i = 0; i < (m + o); i++)
    {
        if (a[i] != a[i + 1])
            ct++;
    }
    if (ct == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}