#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[1000], s2[1000];
    cin >> s1 >> s2;
    int l = strlen(s1);
    cout << strlen(s1) << " " << strlen(s2) << endl;
    cout << strcat(s1, s2) << endl;
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    for (int i = 0; i < l; i++)
    {
        cout << s1[i];
    }
    cout << " " << s2;
    return 0;
}
