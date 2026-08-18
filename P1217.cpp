#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int reverse(int n)
{
    int result = 0;
    int temp = n;
    while (temp > 0)
    {
        result = result * 10 + temp % 10;
        temp /= 10;
    }
    return result;
}

bool is_palindrome(int n)
{
    return n == reverse(n);
}

int main()
{
    int min, max;
    cin >> min >> max;
    for (long i = min; i <= max; i++)
    {
        if (is_palindrome(i) && is_prime(i))
        {
            cout << i << endl;
        }
    }
}