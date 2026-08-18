#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int sides[3];
    cin >> sides[0] >> sides[1] >> sides[2];
    sort(sides, sides + 3);

    if (sides[0] + sides[1] <= sides[2])
    {
        cout << "Not triangle" << endl;
        return 0;
    }

    int s2 = pow(sides[0], 2) + pow(sides[1], 2);
    int s3 = pow(sides[2], 2);

    if (s2 > s3)
    {
        cout << "Acute";
    }
    else if (s2 == s3)
    {
        cout << "Right";
    }
    else
    {
        cout << "Obtuse";
    }
    cout << " triangle" << endl;
    if (sides[0] == sides[1] || sides[1] == sides[2])
    {
        cout << "Isosceles triangle" << endl;
    }
    if (sides[0] == sides[1] && sides[1] == sides[2])
    {
        cout << "Equilateral triangle" << endl;
    }
}