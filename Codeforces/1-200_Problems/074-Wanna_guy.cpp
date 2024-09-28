#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, X, Y, inp, i;
    cin >> n;
    cin >> X;
    vector<int> vect(n+1);
    while (X--)
    {
        cin >> inp;
        vect[inp] += 1;
    }
    cin >> Y;
    while (Y--)
    {
        cin >> inp;
        vect[inp] += 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (vect[i] == 0)
        {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }
    cout << "I become the guy.\n";

    return 0;
}