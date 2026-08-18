#include <bits/stdc++.h>

using namespace std;

bool isEven(int num)
{
    return num % 2 == 0;
}

bool inRange(int num)
{
    return num > 4 && num <= 12;
}
int main()
{
    int num;
    cin >> num;
    cout << (isEven(num) && inRange(num)) << " " << (isEven(num) || inRange(num)) << " " << (isEven(num) != inRange(num)) << " " << (!isEven(num) && !inRange(num)) << endl;
}
