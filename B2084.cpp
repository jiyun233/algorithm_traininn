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
    ll num = 1;
    cin >> num;

    for (ll i = 2; i * i <= num; i++)
    {
        if (num % i != 0)
            continue;
        if (!is_prime(i))
            continue;

        ll remain = num / i;
        if (is_prime(remain))
        {
            if (remain > i)
                cout << remain;
            else
                cout << i;
            cout << endl;
            break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}