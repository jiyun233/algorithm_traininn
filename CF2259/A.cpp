#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, k;
        string field;
        cin >> n >> k >> field;
        int cnt = 0;
        int pices_left = k;
        bool viald = true;
        for (int i = 0; i < n; i++)
        {
            char c = field[i];
            if (pices_left == 1)
            {
                if (c == '1' && viald)

                    cnt++;
            }
            else
            {
                if (c != '1')
                    viald = false;
            }
            pices_left--;
            if (pices_left == 0)
            {
                pices_left = k;
                viald = true;
            }
        }
        cout << cnt << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}