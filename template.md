### 判断素数

```c++
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
```
