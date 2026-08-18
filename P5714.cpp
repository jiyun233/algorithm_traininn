#include <bits/stdc++.h>
using namespace std;

double calc_bmi(double weight, double height)
{
    return weight / pow(height, 2);
}

int main()
{
    double bmi, weight, height;
    cin >> weight >> height;
    bmi = calc_bmi(weight, height);
    if (bmi < 18.5)
        cout << "Underweight";
    else if (bmi >= 18.5 && bmi < 24)
        cout << "Normal";
    else
        cout << setprecision(6) << bmi << endl
             << "Overweight";
    return 0;
}
