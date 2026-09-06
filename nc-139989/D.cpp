#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    ll times = 0;

    while (n > 0)
    {
        times += n;
        n /= 2;
    }

    cout << times << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}