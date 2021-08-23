#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    double salary, sell;

    cin >> name;
    cin >> salary >> sell;

    salary = salary + (sell * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salary << "\n";

    return 0;
}
