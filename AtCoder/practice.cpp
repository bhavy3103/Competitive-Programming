#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 0;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
    return 0;
}

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a[5][5], r, c;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> a[i][j];
//             if (a[i][j] == 1)
//             {
//                 r = abs(3 - i);
//                 c = abs(3 - j);
//                 cout << r + c;
//             }
//         }
//     }
//     return 0;
// }