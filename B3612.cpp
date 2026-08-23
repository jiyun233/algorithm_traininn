#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int length;
    cin >> length;
    vector<int> nums;
    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int j = l - 1; j <= r - 1; j++)
        {
            sum += nums[j];
        }
        cout << sum << endl;
    }
}