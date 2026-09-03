#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll W;
    cin >> n >> W;

    vector<int> r(n), c(n);
    vector<bool> down(n);
    vector<ll> stop(n, W);

    vector<int> rights, downs;
    for (int i = 0; i < n; i++)
    {
        cin >> r[i] >> c[i];
        down[i] = (r[i] == 1);
        if (down[i])
            downs.push_back(i);
        else
            rights.push_back(i);
    }

    for (int it = 0; it < 10; it++)
    {
        for (int ri : rights)
        {
            for (int di : downs)
            {
                ll tR = (ll)c[di] - 1;
                ll tD = (ll)r[ri] - 1;

                if (tR < tD && tR < stop[ri])
                    stop[di] = min(stop[di], tD);

                if (tD < tR && tD < stop[di])
                    stop[ri] = min(stop[ri], tR);
            }
        }
    }

    for (ll x : stop)
        cout << x << '\n';
    return 0;
}