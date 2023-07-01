#include <iostream>
using namespace std;

int btod(int n)
{
    int num = n;
    int decival = 0;

    int base = 1;

    int temp = num;
    while (temp)
    {
        int ld = temp % 10;
        temp = temp / 10;

        decival += ld * base;

        base = base * 2;
    }

    return decival;
}

int main()
{
    int num;
    cin >> num;

    cout << btod(num) << endl;
}