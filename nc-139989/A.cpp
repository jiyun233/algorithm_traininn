#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int swi;
        cin >> swi;
        if (swi >= 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << swi + 1 << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}