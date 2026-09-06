#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int odd = 0;
        int mod0 = 0;
        int mod2 = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            if (x % 2 == 1)
                odd++;
            else if (x % 4 == 0)
                mod0++;
            else
                mod2++;
        }

        cout << max({odd, mod0, mod2}) << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}