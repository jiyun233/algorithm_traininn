#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int lines;
    int counter = 0;
    int vote[3];
    cin >> lines;
    for (int i = 0; i < lines; i++)
    {
        cin >> vote[0] >> vote[1] >> vote[2];
        if (count(vote, vote + 3, 1) >= 2)
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}