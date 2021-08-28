#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d;

    cin >> a >> b >> c;

    d = (b * b) - (4 * a * c);

    if(a != 0 && d > 0)
    {
        d = sqrt(d);

        cout << "R1 = " << fixed << setprecision(5) << (- b + d) / (2 * a) << "\n";
        cout << "R2 = " << fixed << setprecision(5) << (- b - d) / (2 * a) << "\n";
    }
    else
    {
        cout << "Impossivel calcular" << "\n";
    }

    return 0;
}
