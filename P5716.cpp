#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool is_even_year(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int year, month;
    cin >> year >> month;
    if (is_even_year(year) && month == 2)
    {
        cout << "29" << endl;
    }
    else
    {
        cout << m[month];
    }
}