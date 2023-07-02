#include <bits/stdc++.h>
using namespace std;

int main()
{

    int Y, W;
    cin >> Y >> W;

    const string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int D = max(Y, W);
    cout << probability[D] << endl;
    // int q = 6 - y;
    // if (q == 0)
    // {
    //     cout << "1/6" << endl;
    // }
    // else if (q == 1)
    // {
    //     cout << "1/3" << endl;
    // }
    // else if (q == 2)
    // {
    //     cout << "1/2" << endl;
    // }
    // else if (q == 3)
    // {
    //     cout << "2/3" << endl;
    // }
    // else if (q == 4)
    // {
    //     cout << "5/6" << endl;
    // }
    // else if (q == 5)
    // {
    //     cout << "1/1" << endl;
    // }
    // else
    // {
    //     cout << "0/0" << endl;
    // }
    return 0;
}