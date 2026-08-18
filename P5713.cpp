#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int luogu_duration(int topics)
{
    return 11 + (3 * topics);
}

int local_duration(int topics)
{
    return 5 * topics;
}

int main()
{
    int topics;
    cin >> topics;
    string result;
    if (luogu_duration(topics) > local_duration(topics))
    {
        result = "Local";
    }
    else
    {
        result = "Luogu";
    }
    cout << result << endl;
}