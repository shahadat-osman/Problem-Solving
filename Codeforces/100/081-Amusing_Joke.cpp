#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string guest_n, residence_h, pile;
    int ln_1, ln_2, i, j;

    cin >> guest_n >> residence_h >> pile;

    guest_n += residence_h;

    ln_1 = guest_n.size();
    ln_2 = pile.size();

    if (ln_1 != ln_2)
    {
        cout << "NO\n";
        return 0;
    }

    else
    {
        int found = 0;
        for (i = 0; i < ln_1; i++)
        {
            for (j = 0; j < ln_2; j++)
            {
                if (guest_n[i] == pile[j])
                {
                    found++;
                    pile[j] = '.';
                    break;
                }
            }
        }
        if (found == ln_1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}