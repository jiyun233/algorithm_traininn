#include <bits/stdc++.h>

using namespace std;

int blink(long long &color)
{
    long long result = color;
    color = color == 1 ? 0 : 1;
    return result;
}

struct Triple
{
    int first;
    int second;
    int third;
};

int main()
{
    long long pices, querys, color;
    cin >> pices >> querys >> color;
    unordered_map<int, Triple> lights;
    int index = 1;
    int n = 1;
    for (long long i = 0; i < pices; i++)
    {
        long long count;
        cin >> count;
        for (long long i = 0; i < count; i++)
        {
            Triple t;
            t.first = index;
            t.second = blink(color);
            t.third = i + 1;
            lights[n] = t;
        }
        n++;
        index++;
    }
    for (int i = 0; i < querys; i++)
    {
        int pos;
        cin >> pos;
        cout << lights[pos].second << " " << lights[pos].first << " " << lights[pos].third << endl;
    }
}