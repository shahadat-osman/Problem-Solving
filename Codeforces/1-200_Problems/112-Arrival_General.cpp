// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, mini, maxi, mini_ind = 1, maxi_ind = 1, seconds;
    cin >> n;
    vector<int> vect(n);
    for (i = 1; i <= n; i++)
        cin >> vect[i];

    mini = vect[1], maxi = vect[1];

    for (i = 1; i <= n; i++)
    {
        if (vect[i] <= mini)
        {
            mini = vect[i];
            mini_ind = i;
        }

        if (vect[i] > maxi)
        {
            maxi = vect[i];
            maxi_ind = i;
        }
    }
    if (mini_ind < maxi_ind)
    {
        seconds = maxi_ind + (n - mini_ind) - 2;
    }
    else
    {
        seconds = (maxi_ind - 1) + (n - mini_ind);
    }
    cout << seconds << "\n";

    return 0;
}