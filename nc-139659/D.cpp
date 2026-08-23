#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    unordered_map<int, int> freq;
    int l = 0;
    long long weight = 0;
    int result = INT_MAX;

    for (int r = 0; r < n; r++)
    {
        int x = nums[r];
        weight += freq[x];
        freq[x]++;

        while (weight >= k && l <= r)
        {
            result = min(result, r - l + 1);

            int y = nums[l];
            freq[y]--;
            weight -= freq[y];
            l++;
        }
    }

    cout << (result == INT_MAX ? -1 : result) << endl;
    return 0;
}