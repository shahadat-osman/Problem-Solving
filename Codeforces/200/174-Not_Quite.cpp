// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == '?')
            {
                if (j == 0 && ((arr[i][j + 1] == 'A' || arr[i][j + 1] == 'B') && (arr[i][j + 2] == 'A' || arr[i][j + 2] == 'B')))
                {
                    cout << "C\n";
                    return;
                }
                else if (j == 0 && ((arr[i][j + 1] == 'B' || arr[i][j + 1] == 'C') && (arr[i][j + 2] == 'B' || arr[i][j + 2] == 'C')))
                {
                    cout << "A\n";
                    return;
                }
                else if (j == 0 && ((arr[i][j + 1] == 'C' || arr[i][j + 1] == 'A') && (arr[i][j + 2] == 'C' || arr[i][j + 2] == 'A')))
                {
                    cout << "B\n";
                    return;
                }

                if (j == 1 && ((arr[i][j + 1] == 'C' || arr[i][j + 1] == 'A') && (arr[i][j - 1] == 'A' || arr[i][j - 1] == 'C')))
                {
                    cout << "B\n";
                    return;
                }
                else if (j == 1 && ((arr[i][j + 1] == 'C' || arr[i][j + 1] == 'B') && (arr[i][j - 1] == 'B' || arr[i][j - 1] == 'C')))
                {
                    cout << "A\n";
                    return;
                }
                else if (j == 1 && ((arr[i][j + 1] == 'B' || arr[i][j + 1] == 'A') && (arr[i][j - 1] == 'A' || arr[i][j - 1] == 'B')))
                {
                    cout << "C\n";
                    return;
                }

                if (j == 2 && ((arr[i][j - 1] == 'B' || arr[i][j - 1] == 'A') && (arr[i][j - 2] == 'A' || arr[i][j - 2] == 'B')))
                {
                    cout << "C\n";
                    return;
                }
                else if (j == 2 && ((arr[i][j - 1] == 'B' || arr[i][j - 1] == 'C') && (arr[i][j - 2] == 'C' || arr[i][j - 2] == 'B')))
                {
                    cout << "A\n";
                    return;
                }
                else if (j == 2 && ((arr[i][j - 1] == 'C' || arr[i][j - 1] == 'A') && (arr[i][j - 2] == 'A' || arr[i][j - 2] == 'C')))
                {
                    cout << "B\n";
                    return;
                }
            }
        }
    }
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