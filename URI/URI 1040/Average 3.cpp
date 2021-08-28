#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n1, n2, n3, n4, n5, avg, new_avg;

    cin >> n1 >> n2 >> n3 >> n4;

    avg = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / (2 + 3 + 4 + 1);

    cout << "Media: " << fixed << setprecision(1) << avg << "\n";

    if(avg >= 7.0)
    {
        cout << "Aluno aprovado." << "\n";
    }
    else if(avg < 5.0)
    {
        cout << "Aluno reprovado." << "\n";
    }
    else if(avg >= 5.0 && avg <= 6.9)
    {
        cout << "Aluno em exame." << "\n";

        cin >> n5;

        cout << "Nota do exame: "<< fixed << setprecision(1) << n5 << "\n";

        new_avg = (avg + n5) / 2;

        if(new_avg >= 5.0)
        {
            cout << "Aluno aprovado." << "\n";
        }
        else if(new_avg <= 4.9)
        {
            cout << "Aluno reprovado." << "\n";
        }
        cout << "Media final: " << fixed << setprecision(1) << new_avg << "\n";
    }

    return 0;
}
