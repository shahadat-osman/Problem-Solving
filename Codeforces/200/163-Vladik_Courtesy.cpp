// Shahadat Osman
// 811A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, i = 1, j, turn = 0;

    cin >> a >> b;

    while (1)
    {
        if (turn == 0)
        {
            if (a < i)
            {
                cout << "Vladik\n";
                break;
            }
            a -= i;
            i++;
            turn = 1;
        }
        if (turn == 1)
        {
            if (b < i)
            {
                cout << "Valera\n";
                break;
            }
            b -= i;
            i++;
            turn = 0;
        }
    }

    return 0;
}