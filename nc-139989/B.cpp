#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int T = 1;
    cin >> T;

    while (T--)
    {
        int num;
        long long times;
        cin >> num >> times;
        string s = bitset<4>(num).to_string();
        times %= 4;
        while (times--)
        {
            s = s.substr(1) + s[0];
        }
        num = bitset<4>(s).to_ulong();
        int cnt = 0;
        for (const auto &c : s)
        {
            if (c == '1')
                cnt++;
        }
        cout << num << " " << cnt << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}