#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    switch(x)
    {
        case 1:
            cout << "Total: R$ " << fixed << setprecision(2) << y * 4.00 << "\n";
            break;
        case 2:
            cout << "Total: R$ " << fixed << setprecision(2) << y * 4.50 << "\n";
            break;
        case 3:
            cout << "Total: R$ " << fixed << setprecision(2) << y * 5.00 << "\n";
            break;
        case 4:
            cout << "Total: R$ " << fixed << setprecision(2) << y * 2.00 << "\n";
            break;
        case 5:
            cout << "Total: R$ " << fixed << setprecision(2) << y * 1.50 << "\n";
            break;
    }

    return 0;
}
