#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> t;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        t.push_back({temp, i + 1});
    }
    sort(t.begin(), t.end());
    double avg = 0;
    int current = 0;
    for (const auto &i : t)
    {
        avg += current;
        current += i.first;
        cout << i.second << ' ';
    }
    avg /= n;
    cout << endl
         << fixed << setprecision(2) << avg << endl;
}