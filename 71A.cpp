#include <bits/stdc++.h>

using namespace std;

int main()
{
    int lines;
    string letter;
    cin >> lines;
    for (int i = 0; i < lines; i++)
    {
        cin >> letter;
        int length = letter.size();
        if (length > 10)
        {
            cout << letter[0] << length - 2 << letter[length - 1] << endl;
        }
        else
        {
            cout << letter << endl;
        }
    }

    return 0;
}