#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll x;
        cin >> x;

        ll r = sqrt(x);

        while ((r + 1) * (r + 1) <= x)
            r++;

        while (r * r > x)
            r--;

        cout << r << " "
             << x - r * r << " "
             << (r + 1) * (r + 1) - x
             << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}