#include <bits/stdc++.h>
using namespace std;

int main()
{
    int begin;
    int end;
    int duration;

    cin >> begin >> end;

    if(begin > 12)
    {
        begin = begin - 12;
    }
    else if(end > 12)
    {
        end = end - 12;
    }

    if(begin == 0 && end == 0)
        cout << "O JOGO DUROU 24 HORA(S)" << "\n";
    else
        cout << "O JOGO DUROU " << 12 - begin + end << " HORA(S)" << "\n";

    return 0;
}
