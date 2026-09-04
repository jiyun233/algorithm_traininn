#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<string> crypt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> crypt[i];
    }

    string result;
    int x = 0, y = 0;
    int dir = 0;

    result += crypt[y][x];

    for (int i = 0; i < n * n - 1; i++)
    {
        switch (dir)
        {
        case 0:
        {
            // →
            x++;
            result += crypt[y][x];

            if (y == 0)
                dir = 1;
            else
                dir = 3;

            break;
        }

        case 1:
        {
            // ↙
            x--;
            y++;
            result += crypt[y][x];

            if (y == n - 1)
                dir = 0;
            else if (x == 0)
                dir = 2;

            break;
        }

        case 2:
        {
            // ↓
            y++;
            result += crypt[y][x];

            if (x == 0)
                dir = 3;
            else
                dir = 1;

            break;
        }

        case 3:
        {
            // ↗
            x++;
            y--;
            result += crypt[y][x];

            if (x == n - 1)
                dir = 2;
            else if (y == 0)
                dir = 0;

            break;
        }

        default:
            break;
        }
    }

    vector<string> fin(n, string(n, ' '));
    x = 0;
    y = 0;
    dir = 0;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    for (int i = 0; i < n * n; i++)
    {
        fin[y][x] = result[i];

        switch (dir)
        {
        case 0: // →
            if (x < right)
                x++;
            else
            {
                top++;
                y++;
                dir = 1;
            }
            break;

        case 1: // ↓
            if (y < bottom)
                y++;
            else
            {
                right--;
                x--;
                dir = 2;
            }
            break;

        case 2: // ←
            if (x > left)
                x--;
            else
            {
                bottom--;
                y--;
                dir = 3;
            }
            break;

        case 3: // ↑
            if (y > top)
                y--;
            else
            {
                left++;
                x++;
                dir = 0;
            }
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << fin[i] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}