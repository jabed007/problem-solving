#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m;
    int n;

    cin >> m;

    n = m * 100;

    cout << "NOTAS:" << "\n";

    cout << n / 10000 << " nota(s) de R$ 100.00" << "\n";

    n %= 10000;

    cout << n / 5000 << " nota(s) de R$ 50.00" << "\n";

    n %= 5000;

    cout << n / 2000 << " nota(s) de R$ 20.00" << "\n";

    n %= 2000;

    cout << n / 1000  << " nota(s) de R$ 10.00" << "\n";

    n %= 1000;

    cout << n / 500  << " nota(s) de R$ 5.00" << "\n";

    n %= 500;

    cout << n / 200  << " nota(s) de R$ 2.00" << "\n";

    n %= 200;

    cout << "MOEDAS:" << "\n";

    cout << n / 100  << " moeda(s) de R$ 1.00" << "\n";

    n %= 100;

    cout << n / 50  << " moeda(s) de R$ 0.50" << "\n";

    n %= 50;

    cout << n / 25  << " moeda(s) de R$ 0.25" << "\n";

    n %= 25;

    cout << n / 10  << " moeda(s) de R$ 0.10" << "\n";

    n %= 10;

    cout << n / 5  << " moeda(s) de R$ 0.05" << "\n";

    n %= 5;

    cout << n << " moeda(s) de R$ 0.01" << "\n";

    return 0;
}
