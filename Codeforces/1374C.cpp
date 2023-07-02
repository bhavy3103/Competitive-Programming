#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        stack<char> st;
        string s;
        cin >> s;
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push('(');
                ct++;
            }
            else if (s[i] == ')' && !st.empty())
            {
                st.pop();
                ct--;
            }
        }
        cout << ct << endl;
    }

    return 0;
}