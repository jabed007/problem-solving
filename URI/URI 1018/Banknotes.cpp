#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total_amount, note100, note50, note20, note10, note5, note2, note1;
    note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    cin >> total_amount;

    cout << total_amount << "\n";

    while(total_amount > 0)
    {
        if(total_amount >= 100)
        {
            note100++;
            total_amount -= 100;
        }
        else if(total_amount >= 50)
        {
            note50++;
            total_amount -= 50;
        }
        else if(total_amount >= 20)
        {
            note20++;
            total_amount -= 20;
        }
        else if(total_amount >= 10)
        {
            note10++;
            total_amount -= 10;
        }
        else if(total_amount >= 5)
        {
            note5++;
            total_amount -= 5;
        }
        else if(total_amount >= 2)
        {
            note2++;
            total_amount -= 2;
        }
        else if(total_amount >= 1)
        {
            note1++;
            total_amount -= 1;
        }
    }

    cout << note100 << " nota(s) de R$ 100,00" << "\n";
    cout << note50 << " nota(s) de R$ 50,00" << "\n";
    cout << note20 << " nota(s) de R$ 20,00" << "\n";
    cout << note10 << " nota(s) de R$ 10,00" << "\n";
    cout << note5 << " nota(s) de R$ 5,00" << "\n";
    cout << note2 << " nota(s) de R$ 2,00" << "\n";
    cout << note1 << " nota(s) de R$ 1,00" << "\n";

    return 0;
}
