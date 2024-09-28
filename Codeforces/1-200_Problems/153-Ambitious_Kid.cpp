// Shahadat Osman
//  1866A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, mini = 10000000, neg_maxi = -100000000;
    bool zero = false;

    cin >> n;

    vector<int> vect(n);

    for (i = 0; i < n; i++)
    {
        cin >> vect[i];

        if (vect[i] > 0 && vect[i] < mini)
            mini = vect[i];

        if (vect[i] < 0 && vect[i] > neg_maxi)
            neg_maxi = vect[i];

        if (vect[i] == 0)
            zero = true;
    }

    if (zero)
    {
        cout << 0 << "\n";
        return 0;
    }

    else
    {
        if (abs(neg_maxi) < mini)
        {
            cout << abs(neg_maxi) << "\n";
            return 0;
        }
        else
        {
            cout << mini << "\n";
            return 0;
        }
    }

    return 0;
}