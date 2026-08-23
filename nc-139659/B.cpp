#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    unordered_map<char, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;

        if (freq[s[i]] == 3)
        {
            cout << (i + 1) << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
    return 0;
}