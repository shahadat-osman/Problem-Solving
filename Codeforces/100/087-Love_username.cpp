#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, count = 0;

    cin >> n;

    vector<int> vect(n);

    for (i = 0; i < n; i++)
        cin >> vect[i];

    int mini = vect[0], maxi = vect[0];

    for (i = 1; i < n; i++)
    {
        if (vect[i] > maxi)
        {
            maxi = vect[i];
            count++;
        }
        else if (vect[i] < mini)
        {
            mini = vect[i];
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}