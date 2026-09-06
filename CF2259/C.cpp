#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int first = -1, last = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1 || a[i] == -1)
            {
                if (first == -1)
                    first = i;
                last = i;
            }
        }

        if (first == -1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 0 << " ";
            }
            cout << "\n";
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (i == first || i == last)
            {
                cout << 1 << " ";
            }
            else if (a[i] == 1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}