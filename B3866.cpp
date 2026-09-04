#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int sort1(int n)
{
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    int digits[3] = {a, b, c};
    sort(digits, digits + 3);

    return digits[0] * 100 + digits[1] * 10 + digits[2];
}

int sort2(int n)
{
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    int digits[3] = {a, b, c};
    sort(digits, digits + 3);

    return digits[2] * 100 + digits[1] * 10 + digits[0];
}

void solve()
{
    int num = 1;
    cin >> num;
    int times = 0;
    while (num != 495)
    {
        int min = sort1(num);
        int max = sort2(num);
        num = max - min;
        times++;
    }
    cout << times << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}