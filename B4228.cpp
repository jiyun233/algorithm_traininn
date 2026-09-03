#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<ll> boxes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> boxes[i];
    }

    sort(boxes.begin(), boxes.end());

    vector<ll> free(n);
    for (int i = 0; i < n; i++)
    {
        free[i] = boxes[i] / 2;
    }

    int j = 1;

    for (int i = 0; i < n; i++)
    {
        j = max(j, i + 1);

        while (j < n && free[j] < boxes[i])
        {
            j++;
        }

        if (j == n)
        {
            cout << n - i << endl;
            return;
        }

        free[j] -= boxes[i];
    }

    cout << 0 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}