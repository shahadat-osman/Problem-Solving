// AGELIMIT
#include <iostream>
using namespace std;

int main()
{
    int t, x, y, a;

    cin >> t;
    while (t--)
    {
        cin >> x >> y >> a;
        if (a >= x && a < y)
            cout << "YES\n";

        else
            cout << "NO\n";
    }
    return 0;
}
