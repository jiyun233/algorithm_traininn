#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

vector<char> findDupeChars(const string &s1, const string &s2, const string &s3)
{
    set<char> set1(s1.begin(), s1.end());
    set<char> set2(s2.begin(), s2.end());
    set<char> set3(s3.begin(), s3.end());

    vector<char> result;
    for (char c : set1)
    {
        if (set2.count(c) && set3.count(c))
        {
            result.push_back(c);
        }
    }
    return result;
}

int getIndex(const string &s, char c)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
            return i;
    }
    return -1;
}

int main()
{
    int m;
    string s1, s2, s3;
    cin >> m >> s1 >> s2 >> s3;
    vector<char> dupe = findDupeChars(s1, s2, s3);
    if (dupe.size() == 0)
    {
        cout << "-1" << endl;
        return 0;
    }
    int min_time = 32767;
    for (const auto &c : dupe)
    {
        int c1 = max(0, getIndex(s1, c) - 1);
        int c2 = max(0, getIndex(s2, c) - 1);
        int c3 = max(0, getIndex(s3, c) - 1);

        min_time = min(c1 + c2 + c3, min_time);
    }
    cout << min_time << endl;
    return 0;
}