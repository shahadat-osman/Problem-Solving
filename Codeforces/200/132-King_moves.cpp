// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int permitted = 0;
    string pos;
    cin >> pos;

    char colm = pos[0], row = pos[1];
    if ((colm >= 98 && colm <= 103) && (row >= 50 && row <= 55))
        permitted = 8;

    else if ((colm == 'a' || colm == 'h') && (row == '1' || row == '8'))
        permitted = 3;

    else
        permitted = 5;

    cout << permitted << "\n";

    return 0;
}