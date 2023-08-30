// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, n, MIN = 9999, ind_1, ind_2;
    cin >> n;
    vector<int> vect(n);
    for (i = 1; i <= n; i++)
        cin >> vect[i];

    for (i = 1; i < n; i++)
    {
        if (i == 1)
        {
            if (abs(vect[i] - vect[n]) < MIN)
            {
                MIN = abs(vect[i] - vect[n]);
                ind_1 = i, ind_2 = n;
            }
        }
        if (abs(vect[i] - vect[i + 1]) < MIN)
        {
            MIN = abs(vect[i] - vect[i + 1]);
            ind_1 = i, ind_2 = i + 1;
        }
    }
    cout << ind_1 << " " << ind_2 << "\n";

    return 0;
}