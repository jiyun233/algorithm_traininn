#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int step = 1;
    int current = 0;
    for (const auto &num : nums)
    {
        if (current + num > m)
        {
            current = num;
            step++;
        }
        else
        {
            current = current + num;
        }
    }
    cout << step << endl;
}