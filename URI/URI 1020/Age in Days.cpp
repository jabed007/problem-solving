#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days;

    cin >> days;

    cout << days / 365 << " ano(s)" << "\n";
    cout << (days % 365) / 30 << " mes(es)" << "\n";
    cout << (days % 365) % 30 << " dia(s)" << "\n";

    return 0;
}
