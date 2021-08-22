#include <bits/stdc++.h>
using namespace std;

int main()
{
    int initial_hour, initial_minute;
    int final_hour, final_minute;

    cin >> initial_hour >> initial_minute;
    cin >> final_hour >> final_minute;

    if(initial_hour > 12)
    {
        initial_hour = initial_hour - 12;
    }

    if(final_hour > 12)
    {
        final_hour = final_hour - 12;
    }
}
