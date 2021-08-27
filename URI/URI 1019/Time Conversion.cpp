#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    cout << n / 3600 << ":" << (n % 3600) / 60 << ":" << (n % 3600) % 60 << "\n";

    return 0;
}
