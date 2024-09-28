// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int row = 8, colm = 8, i, j, ind_i = 5, ind_j = 5;

    char vect[row + 1][colm + 1];
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            cin >> vect[i][j];
        }
    }

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            if ((vect[i][j] == '#') && (vect[i - 1][j - 1] == '#') && (vect[i + 1][j + 1] == '#') && (vect[i - 1][j + 1] == '#') && (vect[i + 1][j - 1] == '#'))
            {
                ind_i = i;
                ind_j = j;
                break;
            }
        }
    }
    cout << ind_i << " " << ind_j << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}