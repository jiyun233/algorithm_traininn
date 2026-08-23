#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

const int p = 1054 * 1054 + 185 * 185;

int main()
{
    int length, times;
    cin >> length >> times;
    vector<int> nums;
    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int result = 0;
    for (int i = 0; i < times; i++)
    {
        int l, r;
        cin >> l >> r;
        int temp = 1;
        for (int i = l - 1; i < r; i++)
        {
            temp = (1LL * nums[i] * temp) % p;
        }
        result ^= temp;
    }
    cout << result << endl;
    return 0;
}