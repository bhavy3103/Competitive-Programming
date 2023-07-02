#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= c; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (i % 4 != 0)
            {
                for (int j = 1; j < c; j++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else
            {
                cout << "#";
                for (int j = 1; j < c; j++)
                {
                    cout << ".";
                }
                cout << endl;
            }
        }
    }
    return 0;
}