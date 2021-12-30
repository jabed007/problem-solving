#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        if (n <= 10)
        {
            cout << 0 << " " << n << "\n";
        }
        else
        {
            cout << 10 << " " << n - 10 << "\n";
        }
    }
    return 0;
}
