#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int T, Q = 1;
    cin >> T >> Q;
    vector<ll> nums(T, 0);
    for (ll i = 0; i < T; i++)
    {
        cin >> nums[i];
    }
    while (Q--)
    {
        ll target = 0;
        cin >> target;
        if (target < 0)
        {
            cout << -1 << endl;
        }
        auto it = upper_bound(nums.begin(), nums.end(), target);

        if (it != nums.begin() && *(it - 1) == target)
        {
            cout << (it - nums.begin()) << endl;
        }
        else
        {
            cout << -1 << endl;
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