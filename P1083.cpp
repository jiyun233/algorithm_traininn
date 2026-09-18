#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int D, T;
vector<int> rooms;
vector<int> d, s, t;

bool check(int k)
{
    vector<ll> diff(D + 2, 0);
    for (int i = 1; i <= k; i++)
    {
        diff[s[i]] += d[i];
        diff[t[i] + 1] -= d[i];
    }
    ll cur = 0;
    for (int j = 1; j <= D; j++)
    {
        cur += diff[j];
        if (cur > rooms[j])
            return false;
    }
    return true;
}

void solve()
{
    cin >> D >> T;
    rooms.assign(D + 1, 0);
    for (int i = 1; i <= D; i++)
        cin >> rooms[i];

    d.assign(T + 1, 0);
    s.assign(T + 1, 0);
    t.assign(T + 1, 0);
    for (int i = 1; i <= T; i++)
        cin >> d[i] >> s[i] >> t[i];

    if (check(T))
    {
        cout << 0 << endl;
        return;
    }

    int l = 1, r = T;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
            l = mid + 1;
        else
            r = mid;
    }

    cout << -1 << endl
         << l << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}