#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int get_digit(int number, int n)
{
    return static_cast<int>(fmod(number / pow(10, n - 1), 10));
}

int main()
{
    vector<vector<int>> result;
    for (int a = 1; a < 10; a++)
    {
        for (int b = 1; b < 10; b++)
        {
            if (b == a)
                continue;
            for (int c = 1; c < 10; c++)
            {
                if (c == b || c == a)
                    continue;
                set<int> nums;
                int num1 = 100 * a + 10 * b + c;
                int num2 = num1 * 2;
                int num3 = num1 * 3;
                if (num2 >= 1000 || num3 >= 1000)
                    continue;
                nums.insert(a);
                nums.insert(b);
                nums.insert(c);
                nums.insert(get_digit(num2, 1));
                nums.insert(get_digit(num2, 2));
                nums.insert(get_digit(num2, 3));
                nums.insert(get_digit(num3, 1));
                nums.insert(get_digit(num3, 2));
                nums.insert(get_digit(num3, 3));
                nums.erase(0);
                if (nums.size() != 9)
                    continue;
                result.push_back({num1, num2, num3});
            }
        }
    }
    for (const vector<int> row : result)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}