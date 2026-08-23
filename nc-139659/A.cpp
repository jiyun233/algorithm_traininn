#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int result = (4 * abs(a - b)) + (2 * abs(b - c)) + abs(c - a);
    cout << result << endl;
}