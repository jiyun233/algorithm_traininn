#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    ll k;
    cin >> k;
    vector<ll> nodes(k);
    for (int i = 0; i < k; i++)
    {
        cin >> nodes[i];
    }
    sort(nodes.begin(), nodes.end());

    ll ans = 0;
    for (int i = 1; i < k; i++)
    {
        ans = max(ans, nodes[i] - nodes[i - 1]);
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}