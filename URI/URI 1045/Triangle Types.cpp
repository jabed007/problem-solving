#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, temp;
    cin >> a >> b >> c;

    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    else if(a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    else if(b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    cout << a << " " << b << " " << c << "\n";

    if(a >= (b + c))
    {
        cout << "NAO FORMA TRIANGULO" << "\n";
    }

    if(a * a == (b * b + c * c))
    {
        cout << "TRIANGULO RETANGULO" << "\n";
    }

    if(a * a > (b *b + c * c))
    {
        cout << " TRIANGULO OBTUSANGULO" << "\n";
    }

    if(a * a <= (b * b + c * c))
    {
        cout << "TRIANGULO ACUTANGULO" << "\n";
    }

    if(a == b && a == c && b == c)
    {
        cout << "TRIANGULO EQUILATERO" << "\n";
    }
    else if(a == b || a == c || b == c)
    {
        cout << "TRIANGULO ISOSCELES" << "";
    }
    return 0;
}
