#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);
    int avg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
        avg += cards[i];
    }
    avg /= n;
    int steps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (cards[i] != avg)
        {
            cards[i + 1] += cards[i] - avg;
            steps++;
        }
    }
    cout << steps << endl;
    return 0;
}