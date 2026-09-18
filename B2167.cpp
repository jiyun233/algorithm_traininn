#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n, m = 1;
    cin >> n >> m;
    vector<int> nums;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    while (m--)
    {
        int target;
        cin >> target;

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