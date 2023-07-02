#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t], b[t], ct1 = 0, ct2 = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (a[i] > b[i])
        {
            ct1++;
        }
        else if (a[i] < b[i])
        {
            ct2++;
        }
    }
    if (ct1 > ct2)
        cout << "Mishka" << endl;
    else if (ct1 < ct2)
        cout << "Chris" << endl;
    else if (ct1 == ct2)
        cout << "Friendship is magic!^^" << endl;

    return 0;
}