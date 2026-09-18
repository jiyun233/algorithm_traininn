#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {
        int P, Q;
        cin >> P >> Q;

        vector<int> diffX(Q + 2, 0), diffY(Q + 2, 0);

        while (P--)
        {
            int x, y;
            char dir;
            cin >> x >> y >> dir;
            switch (dir)
            {
            case 'N':
                diffY[y + 1]++;
                diffY[Q + 1]--;
                break;
            case 'S':
                diffY[0]++;
                diffY[y]--;
                break;
            case 'E':
                diffX[x + 1]++;
                diffX[Q + 1]--;
                break;
            case 'W':
                diffX[0]++;
                diffX[x]--;
                break;
            }
        }

        vector<int> cntX(Q + 1, 0), cntY(Q + 1, 0);
        int cur = 0;
        for (int i = 0; i <= Q; i++)
        {
            cur += diffX[i];
            cntX[i] = cur;
        }
        cur = 0;
        for (int i = 0; i <= Q; i++)
        {
            cur += diffY[i];
            cntY[i] = cur;
        }

        int bestX = 0, bestY = 0;
        for (int x = 1; x <= Q; x++)
            if (cntX[x] > cntX[bestX])
                bestX = x;
        for (int y = 1; y <= Q; y++)
            if (cntY[y] > cntY[bestY])
                bestY = y;

        cout << "Case #" << tc << ": " << bestX << " " << bestY << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}