#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cnt;
    cin >> cnt;

    while (cnt--)
    {
        string s;
        cin >> s;

        stack<char> st;
        bool isValid = true;

        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else if (c == ')')
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                {
                    isValid = false;
                    break;
                }
            }
            else if (c == ']')
            {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                {
                    isValid = false;
                    break;
                }
            }
            else if (c == '}')
            {
                if (!st.empty() && st.top() == '{')
                    st.pop();
                else
                {
                    isValid = false;
                    break;
                }
            }
        }

        if (isValid && st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}