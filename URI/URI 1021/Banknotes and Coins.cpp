#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;

    cin >> n;

    cout << "NOTAS" << "\n";
    cout << (int)n / 100 << " nota(s) de R$ 100.00" << "\n";
    cout << (int)fmod(n, 100) / 50 << " nota(s) de R$ 50.00" << "\n";
    cout << (int)fmod(fmod(n, 100), 50) / 20 << " nota(s) de R$ 20.00" << "\n";
    cout << (int)fmod(fmod(fmod(n, 100), 50), 20) / 10 << " nota(s) de R$ 10.00" << "\n";
    cout << (int)fmod(fmod(fmod(fmod(n, 100), 50), 20), 10) / 5 << " nota(s) de R$ 5.00" << "\n";
    cout << (int)fmod(fmod(fmod(fmod(fmod(n, 100), 50), 20), 10), 5) / 2 << " nota(s) de R$ 2.00" << "\n";
    cout << "MOEDAS:" << "\n";
    cout << (int)fmod(fmod(fmod(fmod(fmod(fmod(n, 100), 50), 20), 10), 5), 2) / 1 << " nota(s) de R$ 1.00" << "\n";
    cout << fmod(fmod(fmod(fmod(fmod(fmod(fmod(n, 100), 50), 20), 10), 5), 2), 1) / 0.50 << " nota(s) de R$ 0.50" << "\n";
    cout << fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n, 100), 50), 20), 10), 5), 2), 1), 0.50) / 0.25 << " nota(s) de R$ 0.25" << "\n";
    cout << (int)fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n, 100), 50), 20), 10), 5), 2), 1), 0.50), 0.25) / 0.10 << " nota(s) de R$ 0.10" << "\n";
}
