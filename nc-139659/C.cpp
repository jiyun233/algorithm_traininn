#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> total;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total[a[i]]++;
    }

    unordered_map<int, int> left;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        int num = a[i];

        int leftCount = left[num];
        int rightCount = total[num] - leftCount - 1;

        if (leftCount == rightCount)
        {
            ans += (i + 1);
        }

        left[num]++;
    }

    cout << ans << endl;
    return 0;
}