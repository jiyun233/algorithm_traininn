#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> factors(n + 1);
    for (int i = 0; i <= n; i++)
    {
        cin >> factors[i];
    }

    bool first = true;

    for (int i = 0; i <= n; i++)
    {
        int coef = factors[i];
        int exp = n - i;

        if (coef == 0)
            continue;

        if (first)
        {
            if (coef < 0)
                cout << "-";
            first = false;
        }
        else
        {
            if (coef > 0)
                cout << "+";
            else
                cout << "-";
        }

        int abs_coef = abs(coef);
        if (exp == 0)
        {
            cout << abs_coef;
        }
        else if (abs_coef == 1)
        {
            cout << "x";
            if (exp > 1)
                cout << "^" << exp;
        }
        else
        {
            cout << abs_coef << "x";
            if (exp > 1)
                cout << "^" << exp;
        }
    }

    cout << endl;
    return 0;
}