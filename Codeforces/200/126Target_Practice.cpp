// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int row = 10, colm = 10, i, j;
    char arr[row + 1][colm + 1];

    int sum = 0;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'X')
            {
                if (i == 1 || j == 1 || i == 10 || j == 10)
                    sum += 1;
                else if (((j == 2 || j == 9) && (i != 1 && i != 10)) || ((i == 2 || i == 9) && (j != 1 && j != 10)))
                    sum += 2;
                else if (((j == 3 || j == 8) && (i >= 3 && i <= 8)) || ((i == 3 || i == 8) && (j >= 3 && j <= 8)))
                    sum += 3;
                else if (((j == 4 || j == 7) && (i >= 4 && i <= 7)) || ((i == 4 || i == 7) && (j >= 4 && j <= 7)))
                    sum += 4;
                else if (((j == 5 || j == 6) && (i >= 5 && i <= 6)) || ((i == 5 || i == 6) && (j >= 5 && j <= 6)))
                    sum += 5;
            }
        }
    }
    cout << sum << "\n";
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