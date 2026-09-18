#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int lines = 0;
        int cnt = 0;
        cin >> lines;
        vector<ll> line_sizes;
        vector<ll> sums(lines, 0);
        ll max_len = 0;
        for (int i = 0; i < lines; i++)
        {
            ll tmp;
            cin >> tmp;
            line_sizes.push_back(tmp);
            max_len = max(max_len, tmp);
        }
        ll pre = 0;
        for (int i = 0; i < lines; i++)
        {
            pre += line_sizes[i];
            sums[i] = pre + i;
        }

        ll limit = max_len + 1;
        int l = 0;
        cnt = 0;
        for (int r = 1; r < lines; r++)
        {
            while (sums[r] - sums[l] > limit)
                l++;
            cnt = max(cnt, r - l + 1);
        }

        cout << cnt << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}