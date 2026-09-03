#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool is_prime(ll n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
        return false;

    for (ll i = 7; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int T = 1;
    cin >> T;
    bool available[10] = {false};
    while (T--)
    {
        char c;
        cin >> c;
        int d = c - '0';
        if (!available[d])
        {
            available[d] = true;
        }
    }

    ll current_num = 2;
    while (true)
    {
        if (is_prime(current_num))
        {
            string s = to_string(current_num);
            bool all_valid = true;

            for (char c : s)
            {
                int digit = c - '0';
                if (!available[digit])
                {
                    all_valid = false;
                    break;
                }
            }

            if (all_valid)
            {
                cout << current_num << endl;
                return;
            }
        }
        current_num++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}