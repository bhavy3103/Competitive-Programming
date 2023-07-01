#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i;
    cin >> a >> b;
    char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int index;
    for (i = a; i <= b; i++)
    {
        index = i <= 9 ? i - 1 : 9 + i % 2;
        cout << labels[index] << endl;
    }
    return 0;
}
