#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if(a > b)
    {
        if(a > c)
        {
            cout << a << " eh o maior" << "\n";
        }
        else
        {
            cout << c << " eh o maior" << "\n";
        }
    }
    else
    {
        if(b > c)
        {
            cout << b << " eh o maior" << "\n";
        }
        else
        {
            cout << c << " eh o maior" << "\n";
        }
    }

    return  0;
}
