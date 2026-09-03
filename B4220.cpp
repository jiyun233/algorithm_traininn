#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> order;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        order.push_back(cards[l]);

        if (l != r)
        {
            order.push_back(cards[r]);
        }

        l++;
        r--;
    }

    deque<int> dq;
    dq.push_back(order[0]);

    for (int i = 1; i < n; i++)
    {
        ll diffLeft = (ll)abs(dq.front() - order[i]);
        ll diffRight = (ll)abs(dq.back() - order[i]);

        if (diffLeft > diffRight)
        {
            dq.push_front(order[i]);
        }
        else
        {
            dq.push_back(order[i]);
        }
    }

    ll ans = 0;

    for (int i = 1; i < n; i++)
    {
        ans += abs(dq[i] - dq[i - 1]);
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
