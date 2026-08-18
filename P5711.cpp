#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year < 1582 || year > 2020)
    {
        cout << 0;
        return 0;
    }
    cout << ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    return 0;
}