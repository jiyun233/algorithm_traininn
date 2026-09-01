#include <bits/stdc++.h>

using namespace std;

string toBinary(long long n)
{
    if (n == 0)
        return "0";
    string r;
    while (n != 0)
    {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}

int main()
{
    long long x;
    cin >> x;
    string s = toBinary(x);
    long long index = s.size() - 1;
    long long count = 0;
    long long min_i = INT_MAX;
    long long max_i = -1;
    long long i = 0;
    while (index >= 0)
    {
        if (s[index] == '1')
        {
            min_i = min(i, min_i);
            max_i = max(i, max_i);
            count++;
        }
        index--;
        i++;
    }
    cout << count << " " << (min_i == INT_MAX ? -1 : min_i) << " " << max_i << endl;
}