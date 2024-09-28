// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d, i, j, digit, temp;
    string numb;
    cin >> n >> d >> numb;

    numb += d + 48;

    int sz = numb.size();

    temp = d + 48;
    for (i = 0; i < sz - 1; i++)
    {
        if (temp > numb[i])
        {
            for (j = sz - 2; j >= i; j--)
            {
                numb[j + 1] = numb[j];
            }
            numb[i] = temp;
            break;
        }
    }

    cout << numb << "\n";
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