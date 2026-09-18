#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Patient
{
    string id;
    int age;
    int idx;
};

void solve()
{
    int T = 1;
    cin >> T;
    vector<Patient> patients;
    vector<Patient> older_patients;
    int cnt = 0;
    while (T--)
    {
        string id;
        int age;
        cin >> id >> age;
        if (age >= 60)
        {
            older_patients.push_back({id, age, cnt});
        }
        else
        {
            patients.push_back({id, age, cnt});
        }
        cnt++;
    }
    sort(older_patients.begin(), older_patients.end(),
         [](const Patient &a, const Patient &b)
         {
             if (a.age != b.age)
                 return a.age > b.age;
             return a.idx < b.idx;
         });
    for (auto const &patient : older_patients)
    {
        cout << patient.id << endl;
    }
    for (auto const &patient : patients)
    {
        cout << patient.id << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}