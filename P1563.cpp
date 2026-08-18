#include <bits/stdc++.h>

using namespace std;

struct Person
{
    int facing;
    string name;

    Person(const string &n, int i) : name(n), facing(i) {}
};

vector<Person> persons;

int forward(int start, int x)
{
    return (start + x) % (int)persons.size();
}

int backward(int start, int x)
{
    return (start - x + (int)persons.size()) % (int)persons.size();
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int facing;
        string name;
        cin >> facing >> name;
        persons.push_back(Person(name, facing));
    }
    vector<pair<int, int>> commands;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        commands.push_back({a, b});
    }
    int current = 0;
    for (const auto &cmd : commands)
    {
        if (persons[current].facing == 0)
        {
            if (cmd.first == 0)
            {
                current = backward(current, cmd.second);
            }
            else
            {
                current = forward(current, cmd.second);
            }
        }
        else
        {
            if (cmd.first == 0)
            {
                current = forward(current, cmd.second);
            }
            else
            {
                current = backward(current, cmd.second);
            }
        }
    }
    cout << persons[current].name << endl;
}