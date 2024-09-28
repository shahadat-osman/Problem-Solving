#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int y;
    cin >> y;

    y++;
    while (1)
    {
        int a, b, c, d;
        a = y / 1000;
        b = (y / 100) % 10;
        c = (y / 10) % 10;
        d = y % 10;

        if (a == b || a == c || a == d || b == c || b == d || c == d)
            y++;
        else
        {
            cout << y << "\n";
            break;
        }
    }

    return 0;
}