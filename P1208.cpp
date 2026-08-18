#include <bits/stdc++.h>
using namespace std;

int main()
{
    int needs, n;
    cin >> needs >> n;
    vector<pair<int, int>> providers;
    for (int i = 0; i < n; i++)
    {
        int price, total;
        cin >> price >> total;
        providers.push_back({price, total});
    }
    sort(providers.begin(), providers.end());
    int cost = 0;
    int remaining = needs;

    for (int i = 0; remaining > 0; i++)
    {
        int buy = min(providers[i].second, remaining);
        cost += providers[i].first * buy;
        remaining -= buy;
    }

    cout << cost << endl;
    return 0;
}